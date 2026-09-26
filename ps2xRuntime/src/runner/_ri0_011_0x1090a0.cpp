#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ri0_011
// Address: 0x1090a0 - 0x10919c
void _ri0_011_0x1090a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_011_0x1090a0");
#endif

    switch (ctx->pc) {
        case 0x1090c8u: goto label_1090c8;
        case 0x109100u: goto label_109100;
        default: break;
    }

    ctx->pc = 0x1090a0u;

    // 0x1090a0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1090a0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1090a4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1090a4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1090a8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1090a8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1090ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1090acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1090b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1090b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1090b4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1090b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1090b8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1090b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1090bc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1090c0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1090c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1090c8:
    // 0x1090c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1090c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1090cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1090ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1090d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1090d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1090d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1090d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1090d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1090d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1090dc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1090dcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1090e0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1090e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1090e4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1090e8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1090e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1090ec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1090ecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1090f0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1090f0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1090f4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1090f4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1090f8: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1090F8u;
    {
        const bool branch_taken_0x1090f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1090FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1090F8u;
            // 0x1090fc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090f8) {
            ctx->pc = 0x109154u;
            goto label_109154;
        }
    }
    ctx->pc = 0x109100u;
label_109100:
    // 0x109100: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109104: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109104u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109108: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10910c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10910cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109110: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109110u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109114: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109114u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109118: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109118u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10911c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10911cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109120: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109124: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109124u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109128: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109128u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10912c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10912cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109130: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109130u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109134: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109134u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x109138: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x109138u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10913c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10913cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109140: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x109140u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109144: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x109144u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x109148: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109148u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x10914c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x10914Cu;
    {
        const bool branch_taken_0x10914c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10914Cu;
            // 0x109150: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10914c) {
            ctx->pc = 0x109100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109100;
        }
    }
    ctx->pc = 0x109154u;
label_109154:
    // 0x109154: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x109154u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x109158: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10915c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10915cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109160: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x109164: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x109164u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x109168: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x109168u;
    {
        const bool branch_taken_0x109168 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109168u;
            // 0x10916c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109168) {
            ctx->pc = 0x109100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109100;
        }
    }
    ctx->pc = 0x109170u;
    // 0x109170: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109174: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109178: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109178u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10917c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x10917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x109180: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x109180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x109184: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x109184u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x109188: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x109188u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x10918c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x10918Cu;
    {
        const bool branch_taken_0x10918c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10918Cu;
            // 0x109190: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10918c) {
            ctx->pc = 0x1090C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1090c8;
        }
    }
    ctx->pc = 0x109194u;
    // 0x109194: 0x3e00008  jr          $ra
    ctx->pc = 0x109194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10919Cu;
}
