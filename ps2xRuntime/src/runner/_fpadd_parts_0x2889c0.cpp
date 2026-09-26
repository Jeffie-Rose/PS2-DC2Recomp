#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _fpadd_parts
// Address: 0x2889c0 - 0x288bf4
void _fpadd_parts_0x2889c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x2889c0");
#endif

    switch (ctx->pc) {
        case 0x2889d4u: goto label_2889d4;
        case 0x2889e8u: goto label_2889e8;
        case 0x288aa8u: goto label_288aa8;
        case 0x288ae0u: goto label_288ae0;
        case 0x288b88u: goto label_288b88;
        default: break;
    }

    ctx->pc = 0x2889c0u;

    // 0x2889c0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2889c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889c4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2889c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2889c8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2889c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2889cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2889CCu;
    {
        const bool branch_taken_0x2889cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889cc) {
            ctx->pc = 0x2889D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2889CCu;
            // 0x2889d0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2889DCu;
            goto label_2889dc;
        }
    }
    ctx->pc = 0x2889D4u;
label_2889d4:
    // 0x2889d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2889D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2889D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889D4u;
            // 0x2889d8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2889DCu;
label_2889dc:
    // 0x2889dc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2889dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2889e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2889E0u;
    {
        const bool branch_taken_0x2889e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889E0u;
            // 0x2889e4: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889e0) {
            ctx->pc = 0x2889F0u;
            goto label_2889f0;
        }
    }
    ctx->pc = 0x2889E8u;
label_2889e8:
    // 0x2889e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2889E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2889ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889E8u;
            // 0x2889ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2889F0u;
label_2889f0:
    // 0x2889f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2889F0u;
    {
        const bool branch_taken_0x2889f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2889F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889F0u;
            // 0x2889f4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889f0) {
            ctx->pc = 0x288A18u;
            goto label_288a18;
        }
    }
    ctx->pc = 0x2889F8u;
    // 0x2889f8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2889F8u;
    {
        const bool branch_taken_0x2889f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2889f8) {
            ctx->pc = 0x2889D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2889d4;
        }
    }
    ctx->pc = 0x288A00u;
    // 0x288a00: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x288a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x288a04: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x288a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x288a08: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x288A08u;
    {
        const bool branch_taken_0x288a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x288A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A08u;
            // 0x288a0c: 0x3c0201f0  lui         $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a08) {
            ctx->pc = 0x2889D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2889d4;
        }
    }
    ctx->pc = 0x288A10u;
    // 0x288a10: 0x3e00008  jr          $ra
    ctx->pc = 0x288A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A10u;
            // 0x288a14: 0x24425218  addiu       $v0, $v0, 0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21016));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288A18u;
label_288a18:
    // 0x288a18: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x288A18u;
    {
        const bool branch_taken_0x288a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A18u;
            // 0x288a1c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a18) {
            ctx->pc = 0x2889E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2889e8;
        }
    }
    ctx->pc = 0x288A20u;
    // 0x288a20: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288A20u;
    {
        const bool branch_taken_0x288a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A20u;
            // 0x288a24: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a20) {
            ctx->pc = 0x288A68u;
            goto label_288a68;
        }
    }
    ctx->pc = 0x288A28u;
    // 0x288a28: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x288A28u;
    {
        const bool branch_taken_0x288a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288a28) {
            ctx->pc = 0x2889D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2889d4;
        }
    }
    ctx->pc = 0x288A30u;
    // 0x288a30: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x288a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x288a34: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x288a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x288a38: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x288a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x288a3c: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x288a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x288a40: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x288a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288a44: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x288a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288a48: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x288a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288a4c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x288a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288a50: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x288a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x288a54: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x288a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a58: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x288a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x288a5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x288a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x288a60: 0x3e00008  jr          $ra
    ctx->pc = 0x288A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A60u;
            // 0x288a64: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288A68u;
label_288a68:
    // 0x288a68: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x288A68u;
    {
        const bool branch_taken_0x288a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A68u;
            // 0x288a6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a68) {
            ctx->pc = 0x2889E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2889e8;
        }
    }
    ctx->pc = 0x288A70u;
    // 0x288a70: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x288a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x288a74: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x288a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x288a78: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x288a78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x288a7c: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x288a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x288a80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x288a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x288a84: 0x32023  negu        $a0, $v1
    ctx->pc = 0x288a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x288a88: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x288a88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x288a8c: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x288a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x288a90: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x288A90u;
    {
        const bool branch_taken_0x288a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A90u;
            // 0x288a94: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a90) {
            ctx->pc = 0x288B04u;
            goto label_288b04;
        }
    }
    ctx->pc = 0x288A98u;
    // 0x288a98: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x288a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x288a9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288A9Cu;
    {
        const bool branch_taken_0x288a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A9Cu;
            // 0x288aa0: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a9c) {
            ctx->pc = 0x288ACCu;
            goto label_288acc;
        }
    }
    ctx->pc = 0x288AA4u;
    // 0x288aa4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x288aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_288aa8:
    // 0x288aa8: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x288aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x288aac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x288aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x288ab0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x288ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x288ab4: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x288ab4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x288ab8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x288ab8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x288abc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x288ABCu;
    {
        const bool branch_taken_0x288abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x288abc) {
            ctx->pc = 0x288AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288aa8;
        }
    }
    ctx->pc = 0x288AC4u;
    // 0x288ac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288AC4u;
    {
        const bool branch_taken_0x288ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288AC4u;
            // 0x288ac8: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ac4) {
            ctx->pc = 0x288AD4u;
            goto label_288ad4;
        }
    }
    ctx->pc = 0x288ACCu;
label_288acc:
    // 0x288acc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x288accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x288ad0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x288ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_288ad4:
    // 0x288ad4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x288AD4u;
    {
        const bool branch_taken_0x288ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288ad4) {
            ctx->pc = 0x288B28u;
            goto label_288b28;
        }
    }
    ctx->pc = 0x288ADCu;
    // 0x288adc: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x288adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_288ae0:
    // 0x288ae0: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x288ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x288ae4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x288ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x288ae8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x288ae8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288aec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x288aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x288af0: 0x0  nop
    ctx->pc = 0x288af0u;
    // NOP
    // 0x288af4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x288AF4u;
    {
        const bool branch_taken_0x288af4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x288af4) {
            ctx->pc = 0x288AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288ae0;
        }
    }
    ctx->pc = 0x288AFCu;
    // 0x288afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288AFCu;
    {
        const bool branch_taken_0x288afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288AFCu;
            // 0x288b00: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288afc) {
            ctx->pc = 0x288B28u;
            goto label_288b28;
        }
    }
    ctx->pc = 0x288B04u;
label_288b04:
    // 0x288b04: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x288b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x288b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288B08u;
    {
        const bool branch_taken_0x288b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B08u;
            // 0x288b0c: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b08) {
            ctx->pc = 0x288B1Cu;
            goto label_288b1c;
        }
    }
    ctx->pc = 0x288B10u;
    // 0x288b10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x288b10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x288B14u;
    {
        const bool branch_taken_0x288b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B14u;
            // 0x288b18: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b14) {
            ctx->pc = 0x288B28u;
            goto label_288b28;
        }
    }
    ctx->pc = 0x288B1Cu;
label_288b1c:
    // 0x288b1c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x288b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b20: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x288b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x288b24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x288b24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288b28:
    // 0x288b28: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x288B28u;
    {
        const bool branch_taken_0x288b28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x288B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B28u;
            // 0x288b2c: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b28) {
            ctx->pc = 0x288BB4u;
            goto label_288bb4;
        }
    }
    ctx->pc = 0x288B30u;
    // 0x288b30: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x288B30u;
    {
        const bool branch_taken_0x288b30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B30u;
            // 0x288b34: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b30) {
            ctx->pc = 0x288B3Cu;
            goto label_288b3c;
        }
    }
    ctx->pc = 0x288B38u;
    // 0x288b38: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x288b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_288b3c:
    // 0x288b3c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288B3Cu;
    {
        const bool branch_taken_0x288b3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x288B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B3Cu;
            // 0x288b40: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b3c) {
            ctx->pc = 0x288B54u;
            goto label_288b54;
        }
    }
    ctx->pc = 0x288B44u;
    // 0x288b44: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x288b44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x288b48: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x288b48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x288b4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288B4Cu;
    {
        const bool branch_taken_0x288b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B4Cu;
            // 0x288b50: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b4c) {
            ctx->pc = 0x288B64u;
            goto label_288b64;
        }
    }
    ctx->pc = 0x288B54u;
label_288b54:
    // 0x288b54: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x288b54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x288b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288b5c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x288b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x288b60: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x288b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_288b64:
    // 0x288b64: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x288b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x288b68: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x288b6c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x288b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x288b70: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x288b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x288b74: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x288b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288b78: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x288B78u;
    {
        const bool branch_taken_0x288b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B78u;
            // 0x288b7c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b78) {
            ctx->pc = 0x288BC4u;
            goto label_288bc4;
        }
    }
    ctx->pc = 0x288B80u;
    // 0x288b80: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x288b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x288b84: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x288b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_288b88:
    // 0x288b88: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x288b8c: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x288b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x288b90: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x288b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x288b94: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x288b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x288b98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x288b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x288b9c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x288b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288ba0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x288ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x288ba4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x288BA4u;
    {
        const bool branch_taken_0x288ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BA4u;
            // 0x288ba8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ba4) {
            ctx->pc = 0x288B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288b88;
        }
    }
    ctx->pc = 0x288BACu;
    // 0x288bac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288BACu;
    {
        const bool branch_taken_0x288bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BACu;
            // 0x288bb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bac) {
            ctx->pc = 0x288BC4u;
            goto label_288bc4;
        }
    }
    ctx->pc = 0x288BB4u;
label_288bb4:
    // 0x288bb4: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x288bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x288bb8: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x288bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x288bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x288bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bc0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x288bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_288bc4:
    // 0x288bc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288bc8: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x288BC8u;
    {
        const bool branch_taken_0x288bc8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x288BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BC8u;
            // 0x288bcc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bc8) {
            ctx->pc = 0x288BECu;
            goto label_288bec;
        }
    }
    ctx->pc = 0x288BD0u;
    // 0x288bd0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x288bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x288bd4: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x288bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x288bd8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x288bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x288bdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x288bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x288be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x288be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x288be4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x288be4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x288be8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x288be8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_288bec:
    // 0x288bec: 0x3e00008  jr          $ra
    ctx->pc = 0x288BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BECu;
            // 0x288bf0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288BF4u;
}
