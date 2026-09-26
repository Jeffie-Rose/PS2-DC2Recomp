#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckChronicleKanjiFont__FP9mgCMemory
// Address: 0x30aaa0 - 0x30ac70
void CheckChronicleKanjiFont__FP9mgCMemory_0x30aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckChronicleKanjiFont__FP9mgCMemory_0x30aaa0");
#endif

    switch (ctx->pc) {
        case 0x30aaecu: goto label_30aaec;
        case 0x30ab2cu: goto label_30ab2c;
        case 0x30ab40u: goto label_30ab40;
        case 0x30ab60u: goto label_30ab60;
        case 0x30ab7cu: goto label_30ab7c;
        default: break;
    }

    ctx->pc = 0x30aaa0u;

    // 0x30aaa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x30aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x30aaa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x30aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x30aaa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x30aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x30aaac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30aaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30aab0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30aab4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x30aab4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aab8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30aabc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30aac0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30aac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30aac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30aac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30aacc: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AACCu;
    {
        const bool branch_taken_0x30aacc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AACCu;
            // 0x30aad0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aacc) {
            ctx->pc = 0x30AADCu;
            goto label_30aadc;
        }
    }
    ctx->pc = 0x30AAD4u;
    // 0x30aad4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x30AAD4u;
    {
        const bool branch_taken_0x30aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AAD4u;
            // 0x30aad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aad4) {
            ctx->pc = 0x30AC40u;
            goto label_30ac40;
        }
    }
    ctx->pc = 0x30AADCu;
label_30aadc:
    // 0x30aadc: 0xa3a000de  sb          $zero, 0xDE($sp)
    ctx->pc = 0x30aadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 0));
    // 0x30aae0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x30aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x30aae4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x30aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x30aae8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x30aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_30aaec:
    // 0x30aaec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30aaf0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x30aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x30aaf4: 0x2484def0  addiu       $a0, $a0, -0x2110
    ctx->pc = 0x30aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
    // 0x30aaf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30aaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aafc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30aafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab00: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x30ab00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30ab04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30ab0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30ab10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30ab14: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x30ab14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab18: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x30ab18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30ab1c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x30ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x30ab20: 0x92130000  lbu         $s3, 0x0($s0)
    ctx->pc = 0x30ab20u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ab24: 0x92140001  lbu         $s4, 0x1($s0)
    ctx->pc = 0x30ab24u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30ab28: 0x0  nop
    ctx->pc = 0x30ab28u;
    // NOP
label_30ab2c:
    // 0x30ab2c: 0x0  nop
    ctx->pc = 0x30ab2cu;
    // NOP
    // 0x30ab30: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x30ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x30ab34: 0xa3b300dc  sb          $s3, 0xDC($sp)
    ctx->pc = 0x30ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 19));
    // 0x30ab38: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x30AB38u;
    SET_GPR_U32(ctx, 31, 0x30AB40u);
    ctx->pc = 0x30AB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB38u;
            // 0x30ab3c: 0xa3b400dd  sb          $s4, 0xDD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB40u; }
        if (ctx->pc != 0x30AB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB40u; }
        if (ctx->pc != 0x30AB40u) { return; }
    }
    ctx->pc = 0x30AB40u;
label_30ab40:
    // 0x30ab40: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x30ab40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30ab44: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x30AB44u;
    {
        const bool branch_taken_0x30ab44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ab44) {
            ctx->pc = 0x30AB98u;
            goto label_30ab98;
        }
    }
    ctx->pc = 0x30AB4Cu;
    // 0x30ab4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30ab50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AB50u;
    {
        const bool branch_taken_0x30ab50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB50u;
            // 0x30ab54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab50) {
            ctx->pc = 0x30AB6Cu;
            goto label_30ab6c;
        }
    }
    ctx->pc = 0x30AB58u;
    // 0x30ab58: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30AB58u;
    SET_GPR_U32(ctx, 31, 0x30AB60u);
    ctx->pc = 0x30AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB58u;
            // 0x30ab5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB60u; }
        if (ctx->pc != 0x30AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB60u; }
        if (ctx->pc != 0x30AB60u) { return; }
    }
    ctx->pc = 0x30AB60u;
label_30ab60:
    // 0x30ab60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x30ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x30ab64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30AB64u;
    {
        const bool branch_taken_0x30ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB64u;
            // 0x30ab68: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab64) {
            ctx->pc = 0x30AB88u;
            goto label_30ab88;
        }
    }
    ctx->pc = 0x30AB6Cu;
label_30ab6c:
    // 0x30ab6c: 0x0  nop
    ctx->pc = 0x30ab6cu;
    // NOP
    // 0x30ab70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab74: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30AB74u;
    SET_GPR_U32(ctx, 31, 0x30AB7Cu);
    ctx->pc = 0x30AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB74u;
            // 0x30ab78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB7Cu; }
        if (ctx->pc != 0x30AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB7Cu; }
        if (ctx->pc != 0x30AB7Cu) { return; }
    }
    ctx->pc = 0x30AB7Cu;
label_30ab7c:
    // 0x30ab7c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x30ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x30ab80: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x30ab80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30ab84: 0x0  nop
    ctx->pc = 0x30ab84u;
    // NOP
label_30ab88:
    // 0x30ab88: 0xa2330000  sb          $s3, 0x0($s1)
    ctx->pc = 0x30ab88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x30ab8c: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x30ab8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x30ab90: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x30ab90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x30ab94: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x30ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_30ab98:
    // 0x30ab98: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x30ab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x30ab9c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x30ab9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x30aba0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ABA0u;
    {
        const bool branch_taken_0x30aba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ABA0u;
            // 0x30aba4: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aba0) {
            ctx->pc = 0x30ABB0u;
            goto label_30abb0;
        }
    }
    ctx->pc = 0x30ABA8u;
    // 0x30aba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30ABA8u;
    {
        const bool branch_taken_0x30aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ABA8u;
            // 0x30abac: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aba8) {
            ctx->pc = 0x30ABBCu;
            goto label_30abbc;
        }
    }
    ctx->pc = 0x30ABB0u;
label_30abb0:
    // 0x30abb0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x30abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x30abb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30abb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abb8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x30abb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30abbc:
    // 0x30abbc: 0x0  nop
    ctx->pc = 0x30abbcu;
    // NOP
    // 0x30abc0: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x30abc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30abc4: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x30abc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x30abc8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30ABC8u;
    {
        const bool branch_taken_0x30abc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30ABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ABC8u;
            // 0x30abcc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30abc8) {
            ctx->pc = 0x30ABE0u;
            goto label_30abe0;
        }
    }
    ctx->pc = 0x30ABD0u;
    // 0x30abd0: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x30abd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x30abd4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x30abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x30abd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30ABD8u;
    {
        const bool branch_taken_0x30abd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30abd8) {
            ctx->pc = 0x30ABF0u;
            goto label_30abf0;
        }
    }
    ctx->pc = 0x30ABE0u;
label_30abe0:
    // 0x30abe0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30abe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30abe4: 0x2aa20200  slti        $v0, $s5, 0x200
    ctx->pc = 0x30abe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x30abe8: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x30ABE8u;
    {
        const bool branch_taken_0x30abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30abe8) {
            ctx->pc = 0x30AB2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ab2c;
        }
    }
    ctx->pc = 0x30ABF0u;
label_30abf0:
    // 0x30abf0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30ABF0u;
    {
        const bool branch_taken_0x30abf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30abf0) {
            ctx->pc = 0x30ABFCu;
            goto label_30abfc;
        }
    }
    ctx->pc = 0x30ABF8u;
    // 0x30abf8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x30abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_30abfc:
    // 0x30abfc: 0x0  nop
    ctx->pc = 0x30abfcu;
    // NOP
    // 0x30ac00: 0xa61e0004  sh          $fp, 0x4($s0)
    ctx->pc = 0x30ac00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 30));
    // 0x30ac04: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x30ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30ac08: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x30ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x30ac0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x30ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x30ac10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30ac14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30ac18: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x30ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x30ac1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30ac20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30ac24: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x30ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x30ac28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30ac2c: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x30ac2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x30ac30: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x30AC30u;
    {
        const bool branch_taken_0x30ac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ac30) {
            ctx->pc = 0x30AAECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30aaec;
        }
    }
    ctx->pc = 0x30AC38u;
    // 0x30ac38: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x30ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30ac3c: 0x0  nop
    ctx->pc = 0x30ac3cu;
    // NOP
label_30ac40:
    // 0x30ac40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30ac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30ac44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x30ac44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30ac48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30ac48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30ac4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30ac4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30ac50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30ac50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ac54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30ac54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ac58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30ac58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ac5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ac5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ac60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x30AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AC68u;
            // 0x30ac6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AC70u;
}
