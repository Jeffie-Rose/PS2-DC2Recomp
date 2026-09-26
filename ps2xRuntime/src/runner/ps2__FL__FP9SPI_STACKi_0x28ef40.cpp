#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FL__FP9SPI_STACKi
// Address: 0x28ef40 - 0x28f040
void ps2__FL__FP9SPI_STACKi_0x28ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FL__FP9SPI_STACKi_0x28ef40");
#endif

    switch (ctx->pc) {
        case 0x28ef8cu: goto label_28ef8c;
        case 0x28efa8u: goto label_28efa8;
        case 0x28efccu: goto label_28efcc;
        default: break;
    }

    ctx->pc = 0x28ef40u;

    // 0x28ef40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28ef44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28ef48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28ef4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ef50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28ef50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ef58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ef5c: 0x8f848da8  lw          $a0, -0x7258($gp)
    ctx->pc = 0x28ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x28ef60: 0x8f829838  lw          $v0, -0x67C8($gp)
    ctx->pc = 0x28ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940728)));
    // 0x28ef64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ef68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ef6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28ef70: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28ef74: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EF74u;
    {
        const bool branch_taken_0x28ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF74u;
            // 0x28ef78: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef74) {
            ctx->pc = 0x28EF84u;
            goto label_28ef84;
        }
    }
    ctx->pc = 0x28EF7Cu;
    // 0x28ef7c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x28EF7Cu;
    {
        const bool branch_taken_0x28ef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF7Cu;
            // 0x28ef80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef7c) {
            ctx->pc = 0x28F024u;
            goto label_28f024;
        }
    }
    ctx->pc = 0x28EF84u;
label_28ef84:
    // 0x28ef84: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28EF84u;
    {
        const bool branch_taken_0x28ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF84u;
            // 0x28ef88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef84) {
            ctx->pc = 0x28F004u;
            goto label_28f004;
        }
    }
    ctx->pc = 0x28EF8Cu;
label_28ef8c:
    // 0x28ef8c: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x28ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28ef90: 0x3403fff4  ori         $v1, $zero, 0xFFF4
    ctx->pc = 0x28ef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
    // 0x28ef94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ef9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28ef9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28efa0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28EFA0u;
    SET_GPR_U32(ctx, 31, 0x28EFA8u);
    ctx->pc = 0x28EFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFA0u;
            // 0x28efa4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EFA8u; }
        if (ctx->pc != 0x28EFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EFA8u; }
        if (ctx->pc != 0x28EFA8u) { return; }
    }
    ctx->pc = 0x28EFA8u;
label_28efa8:
    // 0x28efa8: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28efac: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x28efacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x28efb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28efb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28efb8: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x28efb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28efbc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28efc0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28efc4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28EFC4u;
    SET_GPR_U32(ctx, 31, 0x28EFCCu);
    ctx->pc = 0x28EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFC4u;
            // 0x28efc8: 0xa4220000  sh          $v0, 0x0($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EFCCu; }
        if (ctx->pc != 0x28EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EFCCu; }
        if (ctx->pc != 0x28EFCCu) { return; }
    }
    ctx->pc = 0x28EFCCu;
label_28efcc:
    // 0x28efcc: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28efd0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28efd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28efd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28efd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28efdc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28efdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28efe0: 0xa4220040  sh          $v0, 0x40($at)
    ctx->pc = 0x28efe0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x28efe4: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28efe8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28efec: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28efecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28eff0: 0x8c22fff4  lw          $v0, -0xC($at)
    ctx->pc = 0x28eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967284)));
    // 0x28eff4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28eff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28effc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28effcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28f000: 0xac22fff4  sw          $v0, -0xC($at)
    ctx->pc = 0x28f000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967284), GPR_U32(ctx, 2));
label_28f004:
    // 0x28f004: 0x0  nop
    ctx->pc = 0x28f004u;
    // NOP
    // 0x28f008: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F008u;
    {
        const bool branch_taken_0x28f008 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x28F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F008u;
            // 0x28f00c: 0x121043  sra         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f008) {
            ctx->pc = 0x28F018u;
            goto label_28f018;
        }
    }
    ctx->pc = 0x28F010u;
    // 0x28f010: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x28f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28f014: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28f014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_28f018:
    // 0x28f018: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28f01c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x28F01Cu;
    {
        const bool branch_taken_0x28f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F01Cu;
            // 0x28f020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f01c) {
            ctx->pc = 0x28EF8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ef8c;
        }
    }
    ctx->pc = 0x28F024u;
label_28f024:
    // 0x28f024: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28f028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f02c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f02cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f038: 0x3e00008  jr          $ra
    ctx->pc = 0x28F038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F038u;
            // 0x28f03c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F040u;
}
