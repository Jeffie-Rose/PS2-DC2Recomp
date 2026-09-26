#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuLoadItemNo__Fi
// Address: 0x2afdb0 - 0x2afec4
void SetMenuLoadItemNo__Fi_0x2afdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuLoadItemNo__Fi_0x2afdb0");
#endif

    switch (ctx->pc) {
        case 0x2afdccu: goto label_2afdcc;
        case 0x2afe00u: goto label_2afe00;
        case 0x2afe10u: goto label_2afe10;
        case 0x2afe8cu: goto label_2afe8c;
        default: break;
    }

    ctx->pc = 0x2afdb0u;

    // 0x2afdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2afdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2afdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2afdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2afdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2afdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2afdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afdc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2afdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afdc4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2AFDC4u;
    SET_GPR_U32(ctx, 31, 0x2AFDCCu);
    ctx->pc = 0x2AFDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFDC4u;
            // 0x2afdc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFDCCu; }
        if (ctx->pc != 0x2AFDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFDCCu; }
        if (ctx->pc != 0x2AFDCCu) { return; }
    }
    ctx->pc = 0x2AFDCCu;
label_2afdcc:
    // 0x2afdcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2afdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afdd0: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2AFDD0u;
    {
        const bool branch_taken_0x2afdd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFDD0u;
            // 0x2afdd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdd0) {
            ctx->pc = 0x2AFEB0u;
            goto label_2afeb0;
        }
    }
    ctx->pc = 0x2AFDD8u;
    // 0x2afdd8: 0x12230018  beq         $s1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AFDD8u;
    {
        const bool branch_taken_0x2afdd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AFDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFDD8u;
            // 0x2afddc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdd8) {
            ctx->pc = 0x2AFE3Cu;
            goto label_2afe3c;
        }
    }
    ctx->pc = 0x2AFDE0u;
    // 0x2afde0: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFDE0u;
    {
        const bool branch_taken_0x2afde0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AFDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFDE0u;
            // 0x2afde4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afde0) {
            ctx->pc = 0x2AFDF8u;
            goto label_2afdf8;
        }
    }
    ctx->pc = 0x2AFDE8u;
    // 0x2afde8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFDE8u;
    {
        const bool branch_taken_0x2afde8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afde8) {
            ctx->pc = 0x2AFDF8u;
            goto label_2afdf8;
        }
    }
    ctx->pc = 0x2AFDF0u;
    // 0x2afdf0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2AFDF0u;
    {
        const bool branch_taken_0x2afdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFDF0u;
            // 0x2afdf4: 0x2a01000c  slti        $at, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdf0) {
            ctx->pc = 0x2AFE7Cu;
            goto label_2afe7c;
        }
    }
    ctx->pc = 0x2AFDF8u;
label_2afdf8:
    // 0x2afdf8: 0xc066d24  jal         func_19B490
    ctx->pc = 0x2AFDF8u;
    SET_GPR_U32(ctx, 31, 0x2AFE00u);
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFE00u; }
        if (ctx->pc != 0x2AFE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFE00u; }
        if (ctx->pc != 0x2AFE00u) { return; }
    }
    ctx->pc = 0x2AFE00u;
label_2afe00:
    // 0x2afe00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afe00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2afe04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe08: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2afe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2afe0c: 0x24a5cc10  addiu       $a1, $a1, -0x33F0
    ctx->pc = 0x2afe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954000));
label_2afe10:
    // 0x2afe10: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2afe14: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x2afe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2afe18: 0x84660172  lh          $a2, 0x172($v1)
    ctx->pc = 0x2afe18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 370)));
    // 0x2afe1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2afe1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2afe20: 0x24e7006c  addiu       $a3, $a3, 0x6C
    ctx->pc = 0x2afe20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    // 0x2afe24: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2afe24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2afe28: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x2afe28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2afe2c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AFE2Cu;
    {
        const bool branch_taken_0x2afe2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFE2Cu;
            // 0x2afe30: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe2c) {
            ctx->pc = 0x2AFE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2afe10;
        }
    }
    ctx->pc = 0x2AFE34u;
    // 0x2afe34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AFE34u;
    {
        const bool branch_taken_0x2afe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe34) {
            ctx->pc = 0x2AFE78u;
            goto label_2afe78;
        }
    }
    ctx->pc = 0x2AFE3Cu;
label_2afe3c:
    // 0x2afe3c: 0x848347d6  lh          $v1, 0x47D6($a0)
    ctx->pc = 0x2afe3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18390)));
    // 0x2afe40: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2afe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2afe44: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2afe44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2afe48: 0xa423cc10  sh          $v1, -0x33F0($at)
    ctx->pc = 0x2afe48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294954000), (uint16_t)GPR_U32(ctx, 3));
    // 0x2afe4c: 0x84834692  lh          $v1, 0x4692($a0)
    ctx->pc = 0x2afe4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18066)));
    // 0x2afe50: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2afe54: 0xa423cc12  sh          $v1, -0x33EE($at)
    ctx->pc = 0x2afe54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294954002), (uint16_t)GPR_U32(ctx, 3));
    // 0x2afe58: 0x848346fe  lh          $v1, 0x46FE($a0)
    ctx->pc = 0x2afe58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18174)));
    // 0x2afe5c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2afe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2afe60: 0xa423cc14  sh          $v1, -0x33EC($at)
    ctx->pc = 0x2afe60u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294954004), (uint16_t)GPR_U32(ctx, 3));
    // 0x2afe64: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2afe64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2afe68: 0xa420cc16  sh          $zero, -0x33EA($at)
    ctx->pc = 0x2afe68u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294954006), (uint16_t)GPR_U32(ctx, 0));
    // 0x2afe6c: 0x8483476a  lh          $v1, 0x476A($a0)
    ctx->pc = 0x2afe6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18282)));
    // 0x2afe70: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2afe70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2afe74: 0xa423cc18  sh          $v1, -0x33E8($at)
    ctx->pc = 0x2afe74u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294954008), (uint16_t)GPR_U32(ctx, 3));
label_2afe78:
    // 0x2afe78: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x2afe78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_2afe7c:
    // 0x2afe7c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2AFE7Cu;
    {
        const bool branch_taken_0x2afe7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFE7Cu;
            // 0x2afe80: 0x102840  sll         $a1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe7c) {
            ctx->pc = 0x2AFEACu;
            goto label_2afeac;
        }
    }
    ctx->pc = 0x2AFE84u;
    // 0x2afe84: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2afe84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2afe88: 0x2484cc10  addiu       $a0, $a0, -0x33F0
    ctx->pc = 0x2afe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954000));
label_2afe8c:
    // 0x2afe8c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2afe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2afe90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2afe90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2afe94: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2afe94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2afe98: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2afe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2afe9c: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x2afe9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2afea0: 0x0  nop
    ctx->pc = 0x2afea0u;
    // NOP
    // 0x2afea4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AFEA4u;
    {
        const bool branch_taken_0x2afea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afea4) {
            ctx->pc = 0x2AFE8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2afe8c;
        }
    }
    ctx->pc = 0x2AFEACu;
label_2afeac:
    // 0x2afeac: 0x0  nop
    ctx->pc = 0x2afeacu;
    // NOP
label_2afeb0:
    // 0x2afeb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2afeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afeb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2afeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afeb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFEBCu;
            // 0x2afec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFEC4u;
}
