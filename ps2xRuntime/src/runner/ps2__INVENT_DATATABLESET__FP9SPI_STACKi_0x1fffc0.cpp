#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INVENT_DATATABLESET__FP9SPI_STACKi
// Address: 0x1fffc0 - 0x2000fc
void ps2__INVENT_DATATABLESET__FP9SPI_STACKi_0x1fffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INVENT_DATATABLESET__FP9SPI_STACKi_0x1fffc0");
#endif

    switch (ctx->pc) {
        case 0x1fffd0u: goto label_1fffd0;
        case 0x200008u: goto label_200008;
        case 0x20003cu: goto label_20003c;
        case 0x2000c8u: goto label_2000c8;
        default: break;
    }

    ctx->pc = 0x1fffc0u;

    // 0x1fffc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fffc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fffc8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1FFFC8u;
    SET_GPR_U32(ctx, 31, 0x1FFFD0u);
    ctx->pc = 0x1FFFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFC8u;
            // 0x1fffcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFD0u; }
        if (ctx->pc != 0x1FFFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFD0u; }
        if (ctx->pc != 0x1FFFD0u) { return; }
    }
    ctx->pc = 0x1FFFD0u;
label_1fffd0:
    // 0x1fffd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fffd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffd4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fffd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fffdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fffe0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1fffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1fffe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFFE4u;
    {
        const bool branch_taken_0x1fffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFE4u;
            // 0x1fffe8: 0xa7809104  sh          $zero, -0x6EFC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938884), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe4) {
            ctx->pc = 0x1FFFF8u;
            goto label_1ffff8;
        }
    }
    ctx->pc = 0x1FFFECu;
    // 0x1fffec: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1fffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ffff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFFF0u;
    {
        const bool branch_taken_0x1ffff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFF0u;
            // 0x1ffff4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffff0) {
            ctx->pc = 0x1FFFFCu;
            goto label_1ffffc;
        }
    }
    ctx->pc = 0x1FFFF8u;
label_1ffff8:
    // 0x1ffff8: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x1ffff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1ffffc:
    // 0x1ffffc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ffffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x200000: 0xc04e748  jal         func_139D20
    ctx->pc = 0x200000u;
    SET_GPR_U32(ctx, 31, 0x200008u);
    ctx->pc = 0x200004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200000u;
            // 0x200004: 0x2484b7a0  addiu       $a0, $a0, -0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200008u; }
        if (ctx->pc != 0x200008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200008u; }
        if (ctx->pc != 0x200008u) { return; }
    }
    ctx->pc = 0x200008u;
label_200008:
    // 0x200008: 0xaf829100  sw          $v0, -0x6F00($gp)
    ctx->pc = 0x200008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938880), GPR_U32(ctx, 2));
    // 0x20000c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x20000cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x200010: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x200010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
    // 0x200014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200018: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x20001c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20001cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x200020: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x200020u;
    {
        const bool branch_taken_0x200020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200020u;
            // 0x200024: 0xa4900000  sh          $s0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200020) {
            ctx->pc = 0x2000E8u;
            goto label_2000e8;
        }
    }
    ctx->pc = 0x200028u;
    // 0x200028: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x200028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x20002c: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x20002Cu;
    {
        const bool branch_taken_0x20002c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x200030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20002Cu;
            // 0x200030: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20002c) {
            ctx->pc = 0x2000ACu;
            goto label_2000ac;
        }
    }
    ctx->pc = 0x200034u;
    // 0x200034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200038: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20003c:
    // 0x20003c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200040: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x200044: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x200044u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x200048: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x20004c: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x20004cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x200050: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200054: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x200054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x200058: 0xa4850024  sh          $a1, 0x24($a0)
    ctx->pc = 0x200058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x20005c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x20005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200060: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x200064: 0xa4850048  sh          $a1, 0x48($a0)
    ctx->pc = 0x200064u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 5));
    // 0x200068: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x20006c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x20006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x200070: 0xa485006c  sh          $a1, 0x6C($a0)
    ctx->pc = 0x200070u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 5));
    // 0x200074: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200078: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x20007c: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x20007cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x200080: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200084: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x200084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x200088: 0xa48500b4  sh          $a1, 0xB4($a0)
    ctx->pc = 0x200088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 180), (uint16_t)GPR_U32(ctx, 5));
    // 0x20008c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x20008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200090: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x200090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x200094: 0xa48500d8  sh          $a1, 0xD8($a0)
    ctx->pc = 0x200094u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 216), (uint16_t)GPR_U32(ctx, 5));
    // 0x200098: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x20009c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x20009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2000a0: 0xa48500fc  sh          $a1, 0xFC($a0)
    ctx->pc = 0x2000a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 252), (uint16_t)GPR_U32(ctx, 5));
    // 0x2000a4: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2000A4u;
    {
        const bool branch_taken_0x2000a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2000A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2000A4u;
            // 0x2000a8: 0x24e70120  addiu       $a3, $a3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000a4) {
            ctx->pc = 0x20003Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20003c;
        }
    }
    ctx->pc = 0x2000ACu;
label_2000ac:
    // 0x2000ac: 0x0  nop
    ctx->pc = 0x2000acu;
    // NOP
    // 0x2000b0: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2000b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2000b4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2000B4u;
    {
        const bool branch_taken_0x2000b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2000B4u;
            // 0x2000b8: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000b4) {
            ctx->pc = 0x2000E8u;
            goto label_2000e8;
        }
    }
    ctx->pc = 0x2000BCu;
    // 0x2000bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2000c0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2000c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2000c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2000c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2000c8:
    // 0x2000c8: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x2000c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x2000cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2000ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2000d0: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x2000d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2000d4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2000d8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x2000d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2000dc: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x2000dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x2000e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2000E0u;
    {
        const bool branch_taken_0x2000e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2000e0) {
            ctx->pc = 0x2000C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2000c8;
        }
    }
    ctx->pc = 0x2000E8u;
label_2000e8:
    // 0x2000e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2000e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2000ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2000ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2000f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2000f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2000F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2000F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2000F4u;
            // 0x2000f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2000FCu;
}
