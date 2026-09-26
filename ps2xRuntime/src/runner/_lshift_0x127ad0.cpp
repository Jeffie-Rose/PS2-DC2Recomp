#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _lshift
// Address: 0x127ad0 - 0x127c48
void _lshift_0x127ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lshift_0x127ad0");
#endif

    switch (ctx->pc) {
        case 0x127b28u: goto label_127b28;
        case 0x127b5cu: goto label_127b5c;
        case 0x127b70u: goto label_127b70;
        case 0x127bb0u: goto label_127bb0;
        case 0x127bf0u: goto label_127bf0;
        case 0x127c1cu: goto label_127c1c;
        default: break;
    }

    ctx->pc = 0x127ad0u;

    // 0x127ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x127ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x127ad4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x127ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x127ad8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x127ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x127adc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x127adcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127ae4: 0x6a143  sra         $s4, $a2, 5
    ctx->pc = 0x127ae4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x127ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127aec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x127aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127af0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x127af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x127af4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x127af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x127af8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x127af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x127afc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127b00: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x127b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x127b04: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x127b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x127b08: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x127b0c: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x127b10: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x127b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x127b14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x127B14u;
    {
        const bool branch_taken_0x127b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B14u;
            // 0x127b18: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b14) {
            ctx->pc = 0x127B4Cu;
            goto label_127b4c;
        }
    }
    ctx->pc = 0x127B1Cu;
    // 0x127b1c: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x127b1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x127b20: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x127b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x127b24: 0x0  nop
    ctx->pc = 0x127b24u;
    // NOP
label_127b28:
    // 0x127b28: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x127b2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x127b30: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x127b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x127b34: 0x0  nop
    ctx->pc = 0x127b34u;
    // NOP
    // 0x127b38: 0x0  nop
    ctx->pc = 0x127b38u;
    // NOP
    // 0x127b3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127B3Cu;
    {
        const bool branch_taken_0x127b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b3c) {
            ctx->pc = 0x127B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127b28;
        }
    }
    ctx->pc = 0x127B44u;
    // 0x127b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x127B44u;
    {
        const bool branch_taken_0x127b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b44) {
            ctx->pc = 0x127B54u;
            goto label_127b54;
        }
    }
    ctx->pc = 0x127B4Cu;
label_127b4c:
    // 0x127b4c: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x127b4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x127b50: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_127b54:
    // 0x127b54: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x127B54u;
    SET_GPR_U32(ctx, 31, 0x127B5Cu);
    ctx->pc = 0x127B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B54u;
            // 0x127b58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B5Cu; }
        if (ctx->pc != 0x127B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B5Cu; }
        if (ctx->pc != 0x127B5Cu) { return; }
    }
    ctx->pc = 0x127B5Cu;
label_127b5c:
    // 0x127b5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x127b5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b60: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x127B60u;
    {
        const bool branch_taken_0x127b60 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x127B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B60u;
            // 0x127b64: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b60) {
            ctx->pc = 0x127B8Cu;
            goto label_127b8c;
        }
    }
    ctx->pc = 0x127B68u;
    // 0x127b68: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b6c: 0x0  nop
    ctx->pc = 0x127b6cu;
    // NOP
label_127b70:
    // 0x127b70: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x127b70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x127b74: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x127b78: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x127b7c: 0x0  nop
    ctx->pc = 0x127b7cu;
    // NOP
    // 0x127b80: 0x0  nop
    ctx->pc = 0x127b80u;
    // NOP
    // 0x127b84: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127B84u;
    {
        const bool branch_taken_0x127b84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b84) {
            ctx->pc = 0x127B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127b70;
        }
    }
    ctx->pc = 0x127B8Cu;
label_127b8c:
    // 0x127b8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x127b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127b98: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x127B98u;
    {
        const bool branch_taken_0x127b98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B98u;
            // 0x127b9c: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b98) {
            ctx->pc = 0x127BE8u;
            goto label_127be8;
        }
    }
    ctx->pc = 0x127BA0u;
    // 0x127ba0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x127ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x127ba4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x127ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba8: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x127ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x127bac: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x127bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_127bb0:
    // 0x127bb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x127bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127bb4: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x127bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x127bb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127bbc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x127bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x127bc0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x127bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x127bc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x127bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127bc8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x127bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x127bcc: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x127bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127bd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127BD0u;
    {
        const bool branch_taken_0x127bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127BD0u;
            // 0x127bd4: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bd0) {
            ctx->pc = 0x127BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127bb0;
        }
    }
    ctx->pc = 0x127BD8u;
    // 0x127bd8: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x127bd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8));
    // 0x127bdc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x127bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x127be0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x127BE0u;
    {
        const bool branch_taken_0x127be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127BE0u;
            // 0x127be4: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127be0) {
            ctx->pc = 0x127C0Cu;
            goto label_127c0c;
        }
    }
    ctx->pc = 0x127BE8u;
label_127be8:
    // 0x127be8: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x127be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x127bec: 0x0  nop
    ctx->pc = 0x127becu;
    // NOP
label_127bf0:
    // 0x127bf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x127bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127bf4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x127bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x127bf8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x127bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x127bfc: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x127bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127c00: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x127c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x127c04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127C04u;
    {
        const bool branch_taken_0x127c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127c04) {
            ctx->pc = 0x127BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127bf0;
        }
    }
    ctx->pc = 0x127C0Cu;
label_127c0c:
    // 0x127c0c: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x127c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x127c10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x127c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c14: 0xc049ce4  jal         func_127390
    ctx->pc = 0x127C14u;
    SET_GPR_U32(ctx, 31, 0x127C1Cu);
    ctx->pc = 0x127C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127C14u;
            // 0x127c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127C1Cu; }
        if (ctx->pc != 0x127C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127C1Cu; }
        if (ctx->pc != 0x127C1Cu) { return; }
    }
    ctx->pc = 0x127C1Cu;
label_127c1c:
    // 0x127c1c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x127c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x127c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127c24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x127c24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127c28: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x127c28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127c2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x127c2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127c30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127c34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127c38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127c40: 0x3e00008  jr          $ra
    ctx->pc = 0x127C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C40u;
            // 0x127c44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127C48u;
}
