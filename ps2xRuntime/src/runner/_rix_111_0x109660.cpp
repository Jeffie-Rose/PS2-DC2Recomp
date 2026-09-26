#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _rix_111
// Address: 0x109660 - 0x109780
void _rix_111_0x109660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_111_0x109660");
#endif

    switch (ctx->pc) {
        case 0x1096c4u: goto label_1096c4;
        default: break;
    }

    ctx->pc = 0x109660u;

    // 0x109660: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109660u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109664: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109664u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109668: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x109668u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x10966c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10966cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109670: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109674: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109678: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109678u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10967c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x10967cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109680: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x109680u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109684: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x109684u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109688: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x109688u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10968c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x10968cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109690: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109690u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109694: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x109694u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109698: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x109698u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x10969c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10969cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1096a0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1096a0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1096a4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1096a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1096a8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1096a8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1096ac: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1096acu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1096b0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1096b0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1096b4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1096b4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1096b8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1096b8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1096bc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1096BCu;
    {
        const bool branch_taken_0x1096bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1096BCu;
            // 0x1096c0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096bc) {
            ctx->pc = 0x109760u;
            goto label_109760;
        }
    }
    ctx->pc = 0x1096C4u;
label_1096c4:
    // 0x1096c4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1096c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1096c8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1096c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1096cc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1096ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1096d0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1096d0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1096d4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1096d4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1096d8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1096d8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1096dc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1096dcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1096e0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1096e0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1096e4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1096e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1096e8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1096e8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1096ec: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1096ecu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1096f0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1096f0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1096f4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1096f4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1096f8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1096f8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1096fc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1096fcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x109700: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x109700u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x109704: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x109704u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109708: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x109708u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x10970c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x10970cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109710: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x109710u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x109714: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x109714u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109718: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x109718u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10971c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x10971cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x109720: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x109720u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x109724: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x109724u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109728: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x109728u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x10972c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x10972cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x109730: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x109730u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x109734: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109734u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109738: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109738u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10973c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10973cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109740: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x109740u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109744: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x109744u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x109748: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x109748u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10974c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10974cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109750: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x109750u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x109754: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109754u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109758: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x109758u;
    {
        const bool branch_taken_0x109758 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109758u;
            // 0x10975c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109758) {
            ctx->pc = 0x1096C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1096c4;
        }
    }
    ctx->pc = 0x109760u;
label_109760:
    // 0x109760: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109764: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109768: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10976c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10976cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x109770: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x109770u;
    {
        const bool branch_taken_0x109770 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109770u;
            // 0x109774: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109770) {
            ctx->pc = 0x1096C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1096c4;
        }
    }
    ctx->pc = 0x109778u;
    // 0x109778: 0x3e00008  jr          $ra
    ctx->pc = 0x109778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109780u;
}
