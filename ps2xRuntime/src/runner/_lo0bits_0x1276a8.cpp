#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _lo0bits
// Address: 0x1276a8 - 0x127768
void _lo0bits_0x1276a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lo0bits_0x1276a8");
#endif

    ctx->pc = 0x1276a8u;

    // 0x1276a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1276a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1276ac: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1276acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1276b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1276B0u;
    {
        const bool branch_taken_0x1276b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276B0u;
            // 0x1276b4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b0) {
            ctx->pc = 0x1276ECu;
            goto label_1276ec;
        }
    }
    ctx->pc = 0x1276B8u;
    // 0x1276b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276B8u;
    {
        const bool branch_taken_0x1276b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276B8u;
            // 0x1276bc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b8) {
            ctx->pc = 0x1276C8u;
            goto label_1276c8;
        }
    }
    ctx->pc = 0x1276C0u;
    // 0x1276c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1276C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1276C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276C0u;
            // 0x1276c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1276C8u;
label_1276c8:
    // 0x1276c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1276C8u;
    {
        const bool branch_taken_0x1276c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1276c8) {
            ctx->pc = 0x1276CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1276C8u;
            // 0x1276cc: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1276E0u;
            goto label_1276e0;
        }
    }
    ctx->pc = 0x1276D0u;
    // 0x1276d0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1276d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1276d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1276D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1276DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276D8u;
            // 0x1276dc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1276E0u;
label_1276e0:
    // 0x1276e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1276e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1276E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1276E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276E4u;
            // 0x1276e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1276ECu;
label_1276ec:
    // 0x1276ec: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1276ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1276f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276F0u;
    {
        const bool branch_taken_0x1276f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276F0u;
            // 0x1276f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f0) {
            ctx->pc = 0x127700u;
            goto label_127700;
        }
    }
    ctx->pc = 0x1276F8u;
    // 0x1276f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1276fc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1276fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_127700:
    // 0x127700: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x127700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127704: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127704u;
    {
        const bool branch_taken_0x127704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127704u;
            // 0x127708: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127704) {
            ctx->pc = 0x127718u;
            goto label_127718;
        }
    }
    ctx->pc = 0x12770Cu;
    // 0x12770c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x127710: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x127714: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x127714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127718:
    // 0x127718: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127718u;
    {
        const bool branch_taken_0x127718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127718u;
            // 0x12771c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127718) {
            ctx->pc = 0x12772Cu;
            goto label_12772c;
        }
    }
    ctx->pc = 0x127720u;
    // 0x127720: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x127720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x127724: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x127728: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x127728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_12772c:
    // 0x12772c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12772Cu;
    {
        const bool branch_taken_0x12772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12772Cu;
            // 0x127730: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12772c) {
            ctx->pc = 0x127740u;
            goto label_127740;
        }
    }
    ctx->pc = 0x127734u;
    // 0x127734: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x127734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x127738: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x127738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12773c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_127740:
    // 0x127740: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x127740u;
    {
        const bool branch_taken_0x127740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127740) {
            ctx->pc = 0x127744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127740u;
            // 0x127744: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127760u;
            goto label_127760;
        }
    }
    ctx->pc = 0x127748u;
    // 0x127748: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x127748u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x12774c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12774Cu;
    {
        const bool branch_taken_0x12774c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12774Cu;
            // 0x127750: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12774c) {
            ctx->pc = 0x12775Cu;
            goto label_12775c;
        }
    }
    ctx->pc = 0x127754u;
    // 0x127754: 0x3e00008  jr          $ra
    ctx->pc = 0x127754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127754u;
            // 0x127758: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12775Cu;
label_12775c:
    // 0x12775c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12775cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_127760:
    // 0x127760: 0x3e00008  jr          $ra
    ctx->pc = 0x127760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127760u;
            // 0x127764: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127768u;
}
