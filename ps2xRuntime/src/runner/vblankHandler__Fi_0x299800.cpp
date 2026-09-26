#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vblankHandler__Fi
// Address: 0x299800 - 0x2998d8
void vblankHandler__Fi_0x299800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vblankHandler__Fi_0x299800");
#endif

    switch (ctx->pc) {
        case 0x299820u: goto label_299820;
        case 0x299870u: goto label_299870;
        case 0x2998a4u: goto label_2998a4;
        default: break;
    }

    ctx->pc = 0x299800u;

    // 0x299800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29980c: 0x93829910  lbu         $v0, -0x66F0($gp)
    ctx->pc = 0x29980cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940944)));
    // 0x299810: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x299810u;
    {
        const bool branch_taken_0x299810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299810u;
            // 0x299814: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299810) {
            ctx->pc = 0x2998BCu;
            goto label_2998bc;
        }
    }
    ctx->pc = 0x299818u;
    // 0x299818: 0xc0a66c8  jal         func_299B20
    ctx->pc = 0x299818u;
    SET_GPR_U32(ctx, 31, 0x299820u);
    ctx->pc = 0x29981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299818u;
            // 0x29981c: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299B20u;
    if (runtime->hasFunction(0x299B20u)) {
        auto targetFn = runtime->lookupFunction(0x299B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299820u; }
        if (ctx->pc != 0x299820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufGetTag__FP5VoBuf_0x299b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299820u; }
        if (ctx->pc != 0x299820u) { return; }
    }
    ctx->pc = 0x299820u;
label_299820:
    // 0x299820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299824: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299824u;
    {
        const bool branch_taken_0x299824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x299824) {
            ctx->pc = 0x299848u;
            goto label_299848;
        }
    }
    ctx->pc = 0x29982Cu;
    // 0x29982c: 0x8f8298e4  lw          $v0, -0x671C($gp)
    ctx->pc = 0x29982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940900)));
    // 0x299830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x299830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x299834: 0xaf8298e4  sw          $v0, -0x671C($gp)
    ctx->pc = 0x299834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940900), GPR_U32(ctx, 2));
    // 0x299838: 0xf  sync
    ctx->pc = 0x299838u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29983c: 0x42000038  ei
    ctx->pc = 0x29983cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x299840: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x299840u;
    {
        const bool branch_taken_0x299840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299840u;
            // 0x299844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299840) {
            ctx->pc = 0x2998C8u;
            goto label_2998c8;
        }
    }
    ctx->pc = 0x299848u;
label_299848:
    // 0x299848: 0x8f829918  lw          $v0, -0x66E8($gp)
    ctx->pc = 0x299848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940952)));
    // 0x29984c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29984Cu;
    {
        const bool branch_taken_0x29984c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29984c) {
            ctx->pc = 0x29987Cu;
            goto label_29987c;
        }
    }
    ctx->pc = 0x299854u;
    // 0x299854: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29985c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29985Cu;
    {
        const bool branch_taken_0x29985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29985c) {
            ctx->pc = 0x29987Cu;
            goto label_29987c;
        }
    }
    ctx->pc = 0x299864u;
    // 0x299864: 0x8f84876c  lw          $a0, -0x7894($gp)
    ctx->pc = 0x299864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
    // 0x299868: 0xc041184  jal         func_104610
    ctx->pc = 0x299868u;
    SET_GPR_U32(ctx, 31, 0x299870u);
    ctx->pc = 0x29986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299868u;
            // 0x29986c: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299870u; }
        if (ctx->pc != 0x299870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299870u; }
        if (ctx->pc != 0x299870u) { return; }
    }
    ctx->pc = 0x299870u;
label_299870:
    // 0x299870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299874: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x299874u;
    {
        const bool branch_taken_0x299874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299874u;
            // 0x299878: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299874) {
            ctx->pc = 0x2998B0u;
            goto label_2998b0;
        }
    }
    ctx->pc = 0x29987Cu;
label_29987c:
    // 0x29987c: 0x8f829918  lw          $v0, -0x66E8($gp)
    ctx->pc = 0x29987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940952)));
    // 0x299880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x299880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299884: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x299884u;
    {
        const bool branch_taken_0x299884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x299884) {
            ctx->pc = 0x2998B0u;
            goto label_2998b0;
        }
    }
    ctx->pc = 0x29988Cu;
    // 0x29988c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299890: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x299890u;
    {
        const bool branch_taken_0x299890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x299890) {
            ctx->pc = 0x2998B0u;
            goto label_2998b0;
        }
    }
    ctx->pc = 0x299898u;
    // 0x299898: 0x8f84876c  lw          $a0, -0x7894($gp)
    ctx->pc = 0x299898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
    // 0x29989c: 0xc041184  jal         func_104610
    ctx->pc = 0x29989Cu;
    SET_GPR_U32(ctx, 31, 0x2998A4u);
    ctx->pc = 0x2998A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29989Cu;
            // 0x2998a0: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998A4u; }
        if (ctx->pc != 0x2998A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998A4u; }
        if (ctx->pc != 0x2998A4u) { return; }
    }
    ctx->pc = 0x2998A4u;
label_2998a4:
    // 0x2998a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2998a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2998ac: 0xa3829914  sb          $v0, -0x66EC($gp)
    ctx->pc = 0x2998acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940948), (uint8_t)GPR_U32(ctx, 2));
label_2998b0:
    // 0x2998b0: 0x8f829918  lw          $v0, -0x66E8($gp)
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940952)));
    // 0x2998b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2998b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2998b8: 0xaf829918  sw          $v0, -0x66E8($gp)
    ctx->pc = 0x2998b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940952), GPR_U32(ctx, 2));
label_2998bc:
    // 0x2998bc: 0xf  sync
    ctx->pc = 0x2998bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2998c0: 0x42000038  ei
    ctx->pc = 0x2998c0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2998c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2998c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2998c8:
    // 0x2998c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2998c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2998ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2998d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2998D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2998D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2998D0u;
            // 0x2998d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2998D8u;
}
