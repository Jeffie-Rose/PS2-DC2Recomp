#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSeVol__FUiiii
// Address: 0x18e9f0 - 0x18ebf4
void sndSetSeVol__FUiiii_0x18e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSeVol__FUiiii_0x18e9f0");
#endif

    switch (ctx->pc) {
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea48u: goto label_18ea48;
        case 0x18eb28u: goto label_18eb28;
        case 0x18eb50u: goto label_18eb50;
        case 0x18eb64u: goto label_18eb64;
        case 0x18ebccu: goto label_18ebcc;
        default: break;
    }

    ctx->pc = 0x18e9f0u;

    // 0x18e9f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18e9f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e9f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18e9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18e9fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ea00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ea04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18ea04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ea0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18ea0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ea14: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18ea14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ea1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18ea1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ea24: 0x12c30069  beq         $s6, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x18EA24u;
    {
        const bool branch_taken_0x18ea24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA24u;
            // 0x18ea28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea24) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EA2Cu;
    // 0x18ea2c: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18EA2Cu;
    SET_GPR_U32(ctx, 31, 0x18EA34u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA34u; }
        if (ctx->pc != 0x18EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA34u; }
        if (ctx->pc != 0x18EA34u) { return; }
    }
    ctx->pc = 0x18EA34u;
label_18ea34:
    // 0x18ea34: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18EA34u;
    SET_GPR_U32(ctx, 31, 0x18EA3Cu);
    ctx->pc = 0x18EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA34u;
            // 0x18ea38: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA3Cu; }
        if (ctx->pc != 0x18EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA3Cu; }
        if (ctx->pc != 0x18EA3Cu) { return; }
    }
    ctx->pc = 0x18EA3Cu;
label_18ea3c:
    // 0x18ea3c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea40: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18EA40u;
    SET_GPR_U32(ctx, 31, 0x18EA48u);
    ctx->pc = 0x18EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA40u;
            // 0x18ea44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA48u; }
        if (ctx->pc != 0x18EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA48u; }
        if (ctx->pc != 0x18EA48u) { return; }
    }
    ctx->pc = 0x18EA48u;
label_18ea48:
    // 0x18ea48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18ea48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea4c: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x18EA4Cu;
    {
        const bool branch_taken_0x18ea4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea4c) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EA54u;
    // 0x18ea54: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EA54u;
    {
        const bool branch_taken_0x18ea54 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18EA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA54u;
            // 0x18ea58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea54) {
            ctx->pc = 0x18EA6Cu;
            goto label_18ea6c;
        }
    }
    ctx->pc = 0x18EA5Cu;
    // 0x18ea5c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18ea60: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18ea60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ea64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EA64u;
    {
        const bool branch_taken_0x18ea64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA64u;
            // 0x18ea68: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea64) {
            ctx->pc = 0x18EA74u;
            goto label_18ea74;
        }
    }
    ctx->pc = 0x18EA6Cu;
label_18ea6c:
    // 0x18ea6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EA6Cu;
    {
        const bool branch_taken_0x18ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea6c) {
            ctx->pc = 0x18EA84u;
            goto label_18ea84;
        }
    }
    ctx->pc = 0x18EA74u;
label_18ea74:
    // 0x18ea74: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x18ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18ea78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ea7c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18ea80: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18ea84:
    // 0x18ea84: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x18EA84u;
    {
        const bool branch_taken_0x18ea84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea84) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EA8Cu;
    // 0x18ea8c: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EA8Cu;
    {
        const bool branch_taken_0x18ea8c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x18EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA8Cu;
            // 0x18ea90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea8c) {
            ctx->pc = 0x18EAA4u;
            goto label_18eaa4;
        }
    }
    ctx->pc = 0x18EA94u;
    // 0x18ea94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ea98: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x18ea98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ea9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EA9Cu;
    {
        const bool branch_taken_0x18ea9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ea9c) {
            ctx->pc = 0x18EAACu;
            goto label_18eaac;
        }
    }
    ctx->pc = 0x18EAA4u;
label_18eaa4:
    // 0x18eaa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EAA4u;
    {
        const bool branch_taken_0x18eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eaa4) {
            ctx->pc = 0x18EAC0u;
            goto label_18eac0;
        }
    }
    ctx->pc = 0x18EAACu;
label_18eaac:
    // 0x18eaac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18eab0: 0x152040  sll         $a0, $s5, 1
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x18eab4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x18eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x18eab8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18eabc: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x18eabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18eac0:
    // 0x18eac0: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x18EAC0u;
    {
        const bool branch_taken_0x18eac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eac0) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EAC8u;
    // 0x18eac8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EAC8u;
    {
        const bool branch_taken_0x18eac8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x18eac8) {
            ctx->pc = 0x18EAD8u;
            goto label_18ead8;
        }
    }
    ctx->pc = 0x18EAD0u;
    // 0x18ead0: 0x82540008  lb          $s4, 0x8($s2)
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18ead4: 0x0  nop
    ctx->pc = 0x18ead4u;
    // NOP
label_18ead8:
    // 0x18ead8: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x18ead8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18eadc: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x18EADCu;
    {
        const bool branch_taken_0x18eadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EADCu;
            // 0x18eae0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eadc) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EAE4u;
    // 0x18eae4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18EAE4u;
    {
        const bool branch_taken_0x18eae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18eae4) {
            ctx->pc = 0x18EB28u;
            goto label_18eb28;
        }
    }
    ctx->pc = 0x18EAECu;
    // 0x18eaec: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18eaf0: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x18EAF0u;
    {
        const bool branch_taken_0x18eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x18eaf0) {
            ctx->pc = 0x18EB28u;
            goto label_18eb28;
        }
    }
    ctx->pc = 0x18EAF8u;
    // 0x18eaf8: 0x680000b  bltz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x18EAF8u;
    {
        const bool branch_taken_0x18eaf8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x18EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAF8u;
            // 0x18eafc: 0x2a810080  slti        $at, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eaf8) {
            ctx->pc = 0x18EB28u;
            goto label_18eb28;
        }
    }
    ctx->pc = 0x18EB00u;
    // 0x18eb00: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EB00u;
    {
        const bool branch_taken_0x18eb00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb00) {
            ctx->pc = 0x18EB28u;
            goto label_18eb28;
        }
    }
    ctx->pc = 0x18EB08u;
    // 0x18eb08: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x18eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18eb0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB0Cu;
    {
        const bool branch_taken_0x18eb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb0c) {
            ctx->pc = 0x18EB28u;
            goto label_18eb28;
        }
    }
    ctx->pc = 0x18EB14u;
    // 0x18eb14: 0xae340214  sw          $s4, 0x214($s1)
    ctx->pc = 0x18eb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 20));
    // 0x18eb18: 0x82450005  lb          $a1, 0x5($s2)
    ctx->pc = 0x18eb18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x18eb1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18eb20: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18EB20u;
    SET_GPR_U32(ctx, 31, 0x18EB28u);
    ctx->pc = 0x18EB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB20u;
            // 0x18eb24: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (runtime->hasFunction(0x18F750u)) {
        auto targetFn = runtime->lookupFunction(0x18F750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB28u; }
        if (ctx->pc != 0x18EB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSqVol__Fiii_0x18f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB28u; }
        if (ctx->pc != 0x18EB28u) { return; }
    }
    ctx->pc = 0x18EB28u;
label_18eb28:
    // 0x18eb28: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18eb2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eb30: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EB30u;
    {
        const bool branch_taken_0x18eb30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18eb30) {
            ctx->pc = 0x18EB50u;
            goto label_18eb50;
        }
    }
    ctx->pc = 0x18EB38u;
    // 0x18eb38: 0x82450005  lb          $a1, 0x5($s2)
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x18eb3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb40: 0x82460006  lb          $a2, 0x6($s2)
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x18eb44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18eb44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb48: 0xc063c8c  jal         func_18F230
    ctx->pc = 0x18EB48u;
    SET_GPR_U32(ctx, 31, 0x18EB50u);
    ctx->pc = 0x18EB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB48u;
            // 0x18eb4c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F230u;
    if (runtime->hasFunction(0x18F230u)) {
        auto targetFn = runtime->lookupFunction(0x18F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB50u; }
        if (ctx->pc != 0x18EB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolPrKr__FUiiiii_0x18f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB50u; }
        if (ctx->pc != 0x18EB50u) { return; }
    }
    ctx->pc = 0x18EB50u;
label_18eb50:
    // 0x18eb50: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18eb54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18eb58: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18EB58u;
    {
        const bool branch_taken_0x18eb58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB58u;
            // 0x18eb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb58) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EB60u;
    // 0x18eb60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18eb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eb64:
    // 0x18eb64: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x18eb68: 0x2464021c  addiu       $a0, $v1, 0x21C
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 540));
    // 0x18eb6c: 0x8463021c  lh          $v1, 0x21C($v1)
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x18eb70: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18EB70u;
    {
        const bool branch_taken_0x18eb70 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18eb70) {
            ctx->pc = 0x18EBA4u;
            goto label_18eba4;
        }
    }
    ctx->pc = 0x18EB78u;
    // 0x18eb78: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18eb7c: 0x14700009  bne         $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EB7Cu;
    {
        const bool branch_taken_0x18eb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x18eb7c) {
            ctx->pc = 0x18EBA4u;
            goto label_18eba4;
        }
    }
    ctx->pc = 0x18EB84u;
    // 0x18eb84: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x18eb84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18eb88: 0x14750006  bne         $v1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB88u;
    {
        const bool branch_taken_0x18eb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x18eb88) {
            ctx->pc = 0x18EBA4u;
            goto label_18eba4;
        }
    }
    ctx->pc = 0x18EB90u;
    // 0x18eb90: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x18eb90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18eb94: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EB94u;
    {
        const bool branch_taken_0x18eb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x18eb94) {
            ctx->pc = 0x18EBA4u;
            goto label_18eba4;
        }
    }
    ctx->pc = 0x18EB9Cu;
    // 0x18eb9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB9Cu;
    {
        const bool branch_taken_0x18eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb9c) {
            ctx->pc = 0x18EBB8u;
            goto label_18ebb8;
        }
    }
    ctx->pc = 0x18EBA4u;
label_18eba4:
    // 0x18eba4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18eba8: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x18eba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18ebac: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18EBACu;
    {
        const bool branch_taken_0x18ebac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBACu;
            // 0x18ebb0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebac) {
            ctx->pc = 0x18EB64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18eb64;
        }
    }
    ctx->pc = 0x18EBB4u;
    // 0x18ebb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ebb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ebb8:
    // 0x18ebb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EBB8u;
    {
        const bool branch_taken_0x18ebb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebb8) {
            ctx->pc = 0x18EBCCu;
            goto label_18ebcc;
        }
    }
    ctx->pc = 0x18EBC0u;
    // 0x18ebc0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ebc4: 0xc0640c8  jal         func_190320
    ctx->pc = 0x18EBC4u;
    SET_GPR_U32(ctx, 31, 0x18EBCCu);
    ctx->pc = 0x18EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBC4u;
            // 0x18ebc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190320u;
    if (runtime->hasFunction(0x190320u)) {
        auto targetFn = runtime->lookupFunction(0x190320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EBCCu; }
        if (ctx->pc != 0x18EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolSeSeq__Fii_0x190320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EBCCu; }
        if (ctx->pc != 0x18EBCCu) { return; }
    }
    ctx->pc = 0x18EBCCu;
label_18ebcc:
    // 0x18ebcc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18ebccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ebd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ebd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ebd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ebd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ebd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ebd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ebdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ebdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ebe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ebe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ebe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ebe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ebe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ebe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ebec: 0x3e00008  jr          $ra
    ctx->pc = 0x18EBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBECu;
            // 0x18ebf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EBF4u;
}
