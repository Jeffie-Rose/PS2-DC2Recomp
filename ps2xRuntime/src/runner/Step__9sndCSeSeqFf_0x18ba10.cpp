#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9sndCSeSeqFf
// Address: 0x18ba10 - 0x18bbe8
void Step__9sndCSeSeqFf_0x18ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9sndCSeSeqFf_0x18ba10");
#endif

    switch (ctx->pc) {
        case 0x18ba4cu: goto label_18ba4c;
        case 0x18ba68u: goto label_18ba68;
        case 0x18ba8cu: goto label_18ba8c;
        case 0x18bb08u: goto label_18bb08;
        case 0x18bb20u: goto label_18bb20;
        case 0x18bb38u: goto label_18bb38;
        case 0x18bb94u: goto label_18bb94;
        case 0x18bbb0u: goto label_18bbb0;
        default: break;
    }

    ctx->pc = 0x18ba10u;

    // 0x18ba10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ba14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ba18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ba1c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18ba20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BA20u;
    {
        const bool branch_taken_0x18ba20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA20u;
            // 0x18ba24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba20) {
            ctx->pc = 0x18BA30u;
            goto label_18ba30;
        }
    }
    ctx->pc = 0x18BA28u;
    // 0x18ba28: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x18BA28u;
    {
        const bool branch_taken_0x18ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA28u;
            // 0x18ba2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba28) {
            ctx->pc = 0x18BBD8u;
            goto label_18bbd8;
        }
    }
    ctx->pc = 0x18BA30u;
label_18ba30:
    // 0x18ba30: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18ba34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BA34u;
    {
        const bool branch_taken_0x18ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA34u;
            // 0x18ba38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba34) {
            ctx->pc = 0x18BA44u;
            goto label_18ba44;
        }
    }
    ctx->pc = 0x18BA3Cu;
    // 0x18ba3c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x18BA3Cu;
    {
        const bool branch_taken_0x18ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA3Cu;
            // 0x18ba40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba3c) {
            ctx->pc = 0x18BBDCu;
            goto label_18bbdc;
        }
    }
    ctx->pc = 0x18BA44u;
label_18ba44:
    // 0x18ba44: 0xc062e58  jal         func_18B960
    ctx->pc = 0x18BA44u;
    SET_GPR_U32(ctx, 31, 0x18BA4Cu);
    ctx->pc = 0x18B960u;
    if (runtime->hasFunction(0x18B960u)) {
        auto targetFn = runtime->lookupFunction(0x18B960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA4Cu; }
        if (ctx->pc != 0x18BA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Count__9sndCSeSeqFf_0x18b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA4Cu; }
        if (ctx->pc != 0x18BA4Cu) { return; }
    }
    ctx->pc = 0x18BA4Cu;
label_18ba4c:
    // 0x18ba4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ba50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BA50u;
    {
        const bool branch_taken_0x18ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ba50) {
            ctx->pc = 0x18BA64u;
            goto label_18ba64;
        }
    }
    ctx->pc = 0x18BA58u;
    // 0x18ba58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18ba5c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18ba60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_18ba64:
    // 0x18ba64: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x18ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_18ba68:
    // 0x18ba68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ba6c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x18ba6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x18ba70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BA70u;
    {
        const bool branch_taken_0x18ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ba70) {
            ctx->pc = 0x18BA94u;
            goto label_18ba94;
        }
    }
    ctx->pc = 0x18BA78u;
    // 0x18ba78: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18ba7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BA7Cu;
    {
        const bool branch_taken_0x18ba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA7Cu;
            // 0x18ba80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba7c) {
            ctx->pc = 0x18BA94u;
            goto label_18ba94;
        }
    }
    ctx->pc = 0x18BA84u;
    // 0x18ba84: 0xc062e74  jal         func_18B9D0
    ctx->pc = 0x18BA84u;
    SET_GPR_U32(ctx, 31, 0x18BA8Cu);
    ctx->pc = 0x18B9D0u;
    if (runtime->hasFunction(0x18B9D0u)) {
        auto targetFn = runtime->lookupFunction(0x18B9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA8Cu; }
        if (ctx->pc != 0x18BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__9sndCSeSeqFv_0x18b9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA8Cu; }
        if (ctx->pc != 0x18BA8Cu) { return; }
    }
    ctx->pc = 0x18BA8Cu;
label_18ba8c:
    // 0x18ba8c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x18BA8Cu;
    {
        const bool branch_taken_0x18ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA8Cu;
            // 0x18ba90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba8c) {
            ctx->pc = 0x18BBD8u;
            goto label_18bbd8;
        }
    }
    ctx->pc = 0x18BA94u;
label_18ba94:
    // 0x18ba94: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18ba94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18ba9c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18ba9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18baa0: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x18BAA0u;
    {
        const bool branch_taken_0x18baa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18baa0) {
            ctx->pc = 0x18BBC0u;
            goto label_18bbc0;
        }
    }
    ctx->pc = 0x18BAA8u;
    // 0x18baa8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18baac: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x18baacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x18bab0: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x18bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18bab4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x18bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18bab8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x18bab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18babc: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x18babcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18bac0: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x18bac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x18bac4: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18BAC4u;
    {
        const bool branch_taken_0x18bac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAC4u;
            // 0x18bac8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bac4) {
            ctx->pc = 0x18BB9Cu;
            goto label_18bb9c;
        }
    }
    ctx->pc = 0x18BACCu;
    // 0x18bacc: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18BACCu;
    {
        const bool branch_taken_0x18bacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BACCu;
            // 0x18bad0: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bacc) {
            ctx->pc = 0x18BB84u;
            goto label_18bb84;
        }
    }
    ctx->pc = 0x18BAD4u;
    // 0x18bad4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18BAD4u;
    {
        const bool branch_taken_0x18bad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAD4u;
            // 0x18bad8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bad4) {
            ctx->pc = 0x18BB28u;
            goto label_18bb28;
        }
    }
    ctx->pc = 0x18BADCu;
    // 0x18badc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18BADCu;
    {
        const bool branch_taken_0x18badc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BADCu;
            // 0x18bae0: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18badc) {
            ctx->pc = 0x18BB10u;
            goto label_18bb10;
        }
    }
    ctx->pc = 0x18BAE4u;
    // 0x18bae4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BAE4u;
    {
        const bool branch_taken_0x18bae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18bae4) {
            ctx->pc = 0x18BAF4u;
            goto label_18baf4;
        }
    }
    ctx->pc = 0x18BAECu;
    // 0x18baec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18BAECu;
    {
        const bool branch_taken_0x18baec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18baec) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BAF4u;
label_18baf4:
    // 0x18baf4: 0x0  nop
    ctx->pc = 0x18baf4u;
    // NOP
    // 0x18baf8: 0x80860004  lb          $a2, 0x4($a0)
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18bafc: 0x80870005  lb          $a3, 0x5($a0)
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18bb00: 0xc062f08  jal         func_18BC20
    ctx->pc = 0x18BB00u;
    SET_GPR_U32(ctx, 31, 0x18BB08u);
    ctx->pc = 0x18BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB00u;
            // 0x18bb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BC20u;
    if (runtime->hasFunction(0x18BC20u)) {
        auto targetFn = runtime->lookupFunction(0x18BC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB08u; }
        if (ctx->pc != 0x18BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NoteOn__9sndCSeSeqFiii_0x18bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB08u; }
        if (ctx->pc != 0x18BB08u) { return; }
    }
    ctx->pc = 0x18BB08u;
label_18bb08:
    // 0x18bb08: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18BB08u;
    {
        const bool branch_taken_0x18bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb08) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB10u;
label_18bb10:
    // 0x18bb10: 0x80860004  lb          $a2, 0x4($a0)
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18bb14: 0x80870005  lb          $a3, 0x5($a0)
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18bb18: 0xc062f50  jal         func_18BD40
    ctx->pc = 0x18BB18u;
    SET_GPR_U32(ctx, 31, 0x18BB20u);
    ctx->pc = 0x18BB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB18u;
            // 0x18bb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BD40u;
    if (runtime->hasFunction(0x18BD40u)) {
        auto targetFn = runtime->lookupFunction(0x18BD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB20u; }
        if (ctx->pc != 0x18BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NoteOff__9sndCSeSeqFiii_0x18bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB20u; }
        if (ctx->pc != 0x18BB20u) { return; }
    }
    ctx->pc = 0x18BB20u;
label_18bb20:
    // 0x18bb20: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18BB20u;
    {
        const bool branch_taken_0x18bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb20) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB28u;
label_18bb28:
    // 0x18bb28: 0x80860004  lb          $a2, 0x4($a0)
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18bb2c: 0x80870005  lb          $a3, 0x5($a0)
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18bb30: 0xc062fb0  jal         func_18BEC0
    ctx->pc = 0x18BB30u;
    SET_GPR_U32(ctx, 31, 0x18BB38u);
    ctx->pc = 0x18BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB30u;
            // 0x18bb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BEC0u;
    if (runtime->hasFunction(0x18BEC0u)) {
        auto targetFn = runtime->lookupFunction(0x18BEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB38u; }
        if (ctx->pc != 0x18BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CtrlChg__9sndCSeSeqFiii_0x18bec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB38u; }
        if (ctx->pc != 0x18BB38u) { return; }
    }
    ctx->pc = 0x18BB38u;
label_18bb38:
    // 0x18bb38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x18bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18bb3c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x18bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18bb40: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x18bb40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18bb44: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB4Cu;
    // 0x18bb4c: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18bb50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB50u;
    {
        const bool branch_taken_0x18bb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb50) {
            ctx->pc = 0x18BB68u;
            goto label_18bb68;
        }
    }
    ctx->pc = 0x18BB58u;
    // 0x18bb58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18bb5c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x18bb60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18bb64: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x18bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_18bb68:
    // 0x18bb68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18bb6c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x18bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x18bb70: 0x80630005  lb          $v1, 0x5($v1)
    ctx->pc = 0x18bb70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x18bb74: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18BB74u;
    {
        const bool branch_taken_0x18bb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB74u;
            // 0x18bb78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb74) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB7Cu;
    // 0x18bb7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18BB7Cu;
    {
        const bool branch_taken_0x18bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB7Cu;
            // 0x18bb80: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb7c) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB84u;
label_18bb84:
    // 0x18bb84: 0x0  nop
    ctx->pc = 0x18bb84u;
    // NOP
    // 0x18bb88: 0x80860004  lb          $a2, 0x4($a0)
    ctx->pc = 0x18bb88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18bb8c: 0xc062fdc  jal         func_18BF70
    ctx->pc = 0x18BB8Cu;
    SET_GPR_U32(ctx, 31, 0x18BB94u);
    ctx->pc = 0x18BB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB8Cu;
            // 0x18bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BF70u;
    if (runtime->hasFunction(0x18BF70u)) {
        auto targetFn = runtime->lookupFunction(0x18BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB94u; }
        if (ctx->pc != 0x18BB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProgChg__9sndCSeSeqFii_0x18bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB94u; }
        if (ctx->pc != 0x18BB94u) { return; }
    }
    ctx->pc = 0x18BB94u;
label_18bb94:
    // 0x18bb94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BB94u;
    {
        const bool branch_taken_0x18bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb94) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB9Cu;
label_18bb9c:
    // 0x18bb9c: 0x0  nop
    ctx->pc = 0x18bb9cu;
    // NOP
    // 0x18bba0: 0x90860005  lbu         $a2, 0x5($a0)
    ctx->pc = 0x18bba0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18bba4: 0x90870004  lbu         $a3, 0x4($a0)
    ctx->pc = 0x18bba4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18bba8: 0xc062ff4  jal         func_18BFD0
    ctx->pc = 0x18BBA8u;
    SET_GPR_U32(ctx, 31, 0x18BBB0u);
    ctx->pc = 0x18BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBA8u;
            // 0x18bbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BFD0u;
    if (runtime->hasFunction(0x18BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x18BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BBB0u; }
        if (ctx->pc != 0x18BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PitchBend__9sndCSeSeqFiii_0x18bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BBB0u; }
        if (ctx->pc != 0x18BBB0u) { return; }
    }
    ctx->pc = 0x18BBB0u;
label_18bbb0:
    // 0x18bbb0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18bbb4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x18bbb8: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x18BBB8u;
    {
        const bool branch_taken_0x18bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBB8u;
            // 0x18bbbc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbb8) {
            ctx->pc = 0x18BA68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ba68;
        }
    }
    ctx->pc = 0x18BBC0u;
label_18bbc0:
    // 0x18bbc0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18bbc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BBC4u;
    {
        const bool branch_taken_0x18bbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBC4u;
            // 0x18bbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbc4) {
            ctx->pc = 0x18BBD8u;
            goto label_18bbd8;
        }
    }
    ctx->pc = 0x18BBCCu;
    // 0x18bbcc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18bbd0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18bbd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bbd8:
    // 0x18bbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18bbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18bbdc:
    // 0x18bbdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x18BBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBE0u;
            // 0x18bbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BBE8u;
}
