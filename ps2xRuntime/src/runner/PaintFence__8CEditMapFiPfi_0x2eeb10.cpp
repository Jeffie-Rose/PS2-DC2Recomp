#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PaintFence__8CEditMapFiPfi
// Address: 0x2eeb10 - 0x2eec5c
void PaintFence__8CEditMapFiPfi_0x2eeb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PaintFence__8CEditMapFiPfi_0x2eeb10");
#endif

    switch (ctx->pc) {
        case 0x2eeb3cu: goto label_2eeb3c;
        case 0x2eeb68u: goto label_2eeb68;
        case 0x2eebb0u: goto label_2eebb0;
        case 0x2eebb8u: goto label_2eebb8;
        case 0x2eebc8u: goto label_2eebc8;
        case 0x2eec3cu: goto label_2eec3c;
        default: break;
    }

    ctx->pc = 0x2eeb10u;

    // 0x2eeb10: 0x27bddfa0  addiu       $sp, $sp, -0x2060
    ctx->pc = 0x2eeb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959008));
    // 0x2eeb14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2eeb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2eeb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2eeb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2eeb1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eeb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2eeb20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2eeb20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eeb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eeb28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2eeb28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eeb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eeb30: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2eeb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb34: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2EEB34u;
    SET_GPR_U32(ctx, 31, 0x2EEB3Cu);
    ctx->pc = 0x2EEB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB34u;
            // 0x2eeb38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB3Cu; }
        if (ctx->pc != 0x2EEB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB3Cu; }
        if (ctx->pc != 0x2EEB3Cu) { return; }
    }
    ctx->pc = 0x2EEB3Cu;
label_2eeb3c:
    // 0x2eeb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eeb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEB40u;
    {
        const bool branch_taken_0x2eeb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB40u;
            // 0x2eeb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb40) {
            ctx->pc = 0x2EEB58u;
            goto label_2eeb58;
        }
    }
    ctx->pc = 0x2EEB48u;
    // 0x2eeb48: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x2eeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x2eeb4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEB4Cu;
    {
        const bool branch_taken_0x2eeb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB4Cu;
            // 0x2eeb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb4c) {
            ctx->pc = 0x2EEB60u;
            goto label_2eeb60;
        }
    }
    ctx->pc = 0x2EEB54u;
    // 0x2eeb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eeb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb58:
    // 0x2eeb58: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2EEB58u;
    {
        const bool branch_taken_0x2eeb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB58u;
            // 0x2eeb5c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb58) {
            ctx->pc = 0x2EEC40u;
            goto label_2eec40;
        }
    }
    ctx->pc = 0x2EEB60u;
label_2eeb60:
    // 0x2eeb60: 0xc06d6b0  jal         func_1B5AC0
    ctx->pc = 0x2EEB60u;
    SET_GPR_U32(ctx, 31, 0x2EEB68u);
    ctx->pc = 0x1B5AC0u;
    if (runtime->hasFunction(0x1B5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB68u; }
        if (ctx->pc != 0x2EEB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFence__10CEditPartsFv_0x1b5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB68u; }
        if (ctx->pc != 0x2EEB68u) { return; }
    }
    ctx->pc = 0x2EEB68u;
label_2eeb68:
    // 0x2eeb68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEB68u;
    {
        const bool branch_taken_0x2eeb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB68u;
            // 0x2eeb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb68) {
            ctx->pc = 0x2EEB78u;
            goto label_2eeb78;
        }
    }
    ctx->pc = 0x2EEB70u;
    // 0x2eeb70: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2EEB70u;
    {
        const bool branch_taken_0x2eeb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb70) {
            ctx->pc = 0x2EEC3Cu;
            goto label_2eec3c;
        }
    }
    ctx->pc = 0x2EEB78u;
label_2eeb78:
    // 0x2eeb78: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x2eeb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x2eeb7c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2eeb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2eeb80: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEB80u;
    {
        const bool branch_taken_0x2eeb80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EEB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB80u;
            // 0x2eeb84: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb80) {
            ctx->pc = 0x2EEB90u;
            goto label_2eeb90;
        }
    }
    ctx->pc = 0x2EEB88u;
    // 0x2eeb88: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2EEB88u;
    {
        const bool branch_taken_0x2eeb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB88u;
            // 0x2eeb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb88) {
            ctx->pc = 0x2EEC3Cu;
            goto label_2eec3c;
        }
    }
    ctx->pc = 0x2EEB90u;
label_2eeb90:
    // 0x2eeb90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eeb90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb94: 0xae821000  sw          $v0, 0x1000($s4)
    ctx->pc = 0x2eeb94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4096), GPR_U32(ctx, 2));
    // 0x2eeb98: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2eeb98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2eeb9c: 0x7e821010  sq          $v0, 0x1010($s4)
    ctx->pc = 0x2eeb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 4112), GPR_VEC(ctx, 2));
    // 0x2eeba0: 0xae911020  sw          $s1, 0x1020($s4)
    ctx->pc = 0x2eeba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4128), GPR_U32(ctx, 17));
    // 0x2eeba4: 0x8e910d44  lw          $s1, 0xD44($s4)
    ctx->pc = 0x2eeba4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3396)));
    // 0x2eeba8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2EEBA8u;
    {
        const bool branch_taken_0x2eeba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBA8u;
            // 0x2eebac: 0xae800ffc  sw          $zero, 0xFFC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeba8) {
            ctx->pc = 0x2EEC10u;
            goto label_2eec10;
        }
    }
    ctx->pc = 0x2EEBB0u;
label_2eebb0:
    // 0x2eebb0: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x2EEBB0u;
    SET_GPR_U32(ctx, 31, 0x2EEBB8u);
    ctx->pc = 0x2EEBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBB0u;
            // 0x2eebb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBB8u; }
        if (ctx->pc != 0x2EEBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBB8u; }
        if (ctx->pc != 0x2EEBB8u) { return; }
    }
    ctx->pc = 0x2EEBB8u;
label_2eebb8:
    // 0x2eebb8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EEBB8u;
    {
        const bool branch_taken_0x2eebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBB8u;
            // 0x2eebbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebb8) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEBC0u;
    // 0x2eebc0: 0xc06d6b0  jal         func_1B5AC0
    ctx->pc = 0x2EEBC0u;
    SET_GPR_U32(ctx, 31, 0x2EEBC8u);
    ctx->pc = 0x1B5AC0u;
    if (runtime->hasFunction(0x1B5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBC8u; }
        if (ctx->pc != 0x2EEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFence__10CEditPartsFv_0x1b5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBC8u; }
        if (ctx->pc != 0x2EEBC8u) { return; }
    }
    ctx->pc = 0x2EEBC8u;
label_2eebc8:
    // 0x2eebc8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EEBC8u;
    {
        const bool branch_taken_0x2eebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eebc8) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEBD0u;
    // 0x2eebd0: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2eebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2eebd4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2eebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2eebd8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEBD8u;
    {
        const bool branch_taken_0x2eebd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2eebd8) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEBE0u;
    // 0x2eebe0: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEBE0u;
    {
        const bool branch_taken_0x2eebe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x2eebe0) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEBE8u;
    // 0x2eebe8: 0x8e820ffc  lw          $v0, 0xFFC($s4)
    ctx->pc = 0x2eebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4092)));
    // 0x2eebec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eebecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eebf0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2eebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2eebf4: 0xac510060  sw          $s1, 0x60($v0)
    ctx->pc = 0x2eebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 17));
    // 0x2eebf8: 0x8e820ffc  lw          $v0, 0xFFC($s4)
    ctx->pc = 0x2eebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4092)));
    // 0x2eebfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2eebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eec00: 0xae820ffc  sw          $v0, 0xFFC($s4)
    ctx->pc = 0x2eec00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4092), GPR_U32(ctx, 2));
label_2eec04:
    // 0x2eec04: 0x0  nop
    ctx->pc = 0x2eec04u;
    // NOP
    // 0x2eec08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2eec08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2eec0c: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x2eec0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_2eec10:
    // 0x2eec10: 0x8e820d40  lw          $v0, 0xD40($s4)
    ctx->pc = 0x2eec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x2eec14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2eec14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eec18: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2EEC18u;
    {
        const bool branch_taken_0x2eec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC18u;
            // 0x2eec1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec18) {
            ctx->pc = 0x2EEBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eebb0;
        }
    }
    ctx->pc = 0x2EEC20u;
    // 0x2eec20: 0x8e820ffc  lw          $v0, 0xFFC($s4)
    ctx->pc = 0x2eec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4092)));
    // 0x2eec24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eec30: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2eec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2eec34: 0xc0bbb78  jal         func_2EEDE0
    ctx->pc = 0x2EEC34u;
    SET_GPR_U32(ctx, 31, 0x2EEC3Cu);
    ctx->pc = 0x2EEC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC34u;
            // 0x2eec38: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEDE0u;
    if (runtime->hasFunction(0x2EEDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EEDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEC3Cu; }
        if (ctx->pc != 0x2EEC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PaintFence__8CEditMapFP10CEditParts_0x2eede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEC3Cu; }
        if (ctx->pc != 0x2EEC3Cu) { return; }
    }
    ctx->pc = 0x2EEC3Cu;
label_2eec3c:
    // 0x2eec3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2eec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2eec40:
    // 0x2eec40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eec40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eec44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eec44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eec48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eec48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eec4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eec4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eec50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eec50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eec54: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC54u;
            // 0x2eec58: 0x27bd2060  addiu       $sp, $sp, 0x2060 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEC5Cu;
}
