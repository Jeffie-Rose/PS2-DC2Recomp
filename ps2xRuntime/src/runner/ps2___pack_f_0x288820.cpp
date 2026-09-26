#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __pack_f
// Address: 0x288820 - 0x28892c
void ps2___pack_f_0x288820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x288820");
#endif

    ctx->pc = 0x288820u;

    // 0x288820: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x288820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x288824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288828: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x288828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28882c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x28882cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288830u;
    {
        const bool branch_taken_0x288830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288830u;
            // 0x288834: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288830) {
            ctx->pc = 0x288848u;
            goto label_288848;
        }
    }
    ctx->pc = 0x288838u;
    // 0x288838: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x28883c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28883cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288840: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x288840u;
    {
        const bool branch_taken_0x288840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288840u;
            // 0x288844: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288840) {
            ctx->pc = 0x2888DCu;
            goto label_2888dc;
        }
    }
    ctx->pc = 0x288848u;
label_288848:
    // 0x288848: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x288848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x28884c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28884Cu;
    {
        const bool branch_taken_0x28884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28884Cu;
            // 0x288850: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28884c) {
            ctx->pc = 0x2888A0u;
            goto label_2888a0;
        }
    }
    ctx->pc = 0x288854u;
    // 0x288854: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288854u;
    {
        const bool branch_taken_0x288854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288854) {
            ctx->pc = 0x288864u;
            goto label_288864;
        }
    }
    ctx->pc = 0x28885Cu;
    // 0x28885c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28885Cu;
    {
        const bool branch_taken_0x28885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28885Cu;
            // 0x288860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28885c) {
            ctx->pc = 0x2888DCu;
            goto label_2888dc;
        }
    }
    ctx->pc = 0x288864u;
label_288864:
    // 0x288864: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x288864u;
    {
        const bool branch_taken_0x288864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x288868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288864u;
            // 0x288868: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288864) {
            ctx->pc = 0x2888E0u;
            goto label_2888e0;
        }
    }
    ctx->pc = 0x28886Cu;
    // 0x28886c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x288870: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x288870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x288874: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288874u;
    {
        const bool branch_taken_0x288874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288874u;
            // 0x288878: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288874) {
            ctx->pc = 0x288894u;
            goto label_288894;
        }
    }
    ctx->pc = 0x28887Cu;
    // 0x28887c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288880: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x288880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x288884: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x288884u;
    {
        const bool branch_taken_0x288884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288884u;
            // 0x288888: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288884) {
            ctx->pc = 0x2888D8u;
            goto label_2888d8;
        }
    }
    ctx->pc = 0x28888Cu;
    // 0x28888c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28888Cu;
    {
        const bool branch_taken_0x28888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28888Cu;
            // 0x288890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28888c) {
            ctx->pc = 0x2888D8u;
            goto label_2888d8;
        }
    }
    ctx->pc = 0x288894u;
label_288894:
    // 0x288894: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x288894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x288898: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288898u;
    {
        const bool branch_taken_0x288898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288898u;
            // 0x28889c: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288898) {
            ctx->pc = 0x2888ACu;
            goto label_2888ac;
        }
    }
    ctx->pc = 0x2888A0u;
label_2888a0:
    // 0x2888a0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2888a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2888A4u;
    {
        const bool branch_taken_0x2888a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888A4u;
            // 0x2888a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888a4) {
            ctx->pc = 0x2888DCu;
            goto label_2888dc;
        }
    }
    ctx->pc = 0x2888ACu;
label_2888ac:
    // 0x2888ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2888acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2888b0: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x2888b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x2888b4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2888B4u;
    {
        const bool branch_taken_0x2888b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2888b4) {
            ctx->pc = 0x2888B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2888B4u;
            // 0x2888b8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2888C8u;
            goto label_2888c8;
        }
    }
    ctx->pc = 0x2888BCu;
    // 0x2888bc: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2888bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2888c0: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2888c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2888c4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2888c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_2888c8:
    // 0x2888c8: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2888C8u;
    {
        const bool branch_taken_0x2888c8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2888c8) {
            ctx->pc = 0x2888CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2888C8u;
            // 0x2888cc: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2888DCu;
            goto label_2888dc;
        }
    }
    ctx->pc = 0x2888D0u;
    // 0x2888d0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2888d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2888d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2888d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2888d8:
    // 0x2888d8: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x2888d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_2888dc:
    // 0x2888dc: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x2888dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_2888e0:
    // 0x2888e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2888e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x2888e4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2888e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2888e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2888e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2888ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2888ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2888f0: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x2888f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x2888f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2888f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2888f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2888f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2888fc: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2888fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x288900: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x288900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x288904: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x288904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x288908: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x288908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x28890c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x28890cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x288910: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288914: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x288914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x288918: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x288918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x28891c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x28891cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x288920: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288920u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288924: 0x3e00008  jr          $ra
    ctx->pc = 0x288924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28892Cu;
}
