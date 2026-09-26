#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _rix_100
// Address: 0x1091a0 - 0x10923c
void _rix_100_0x1091a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_100_0x1091a0");
#endif

    switch (ctx->pc) {
        case 0x1091c4u: goto label_1091c4;
        default: break;
    }

    ctx->pc = 0x1091a0u;

    // 0x1091a0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1091a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1091a4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1091a8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1091ac: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1091acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1091b0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1091b4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1091b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1091b8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1091b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1091bc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1091bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1091c0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1091c0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1091c4:
    // 0x1091c4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1091c4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1091c8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1091c8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1091cc: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1091ccu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1091d0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1091d0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1091d4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1091d4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1091d8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x1091d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1091dc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x1091dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1091e0: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1091e0u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1091e4: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1091e4u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1091e8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1091e8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1091ec: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1091ecu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1091f0: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1091f0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1091f4: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1091f4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1091f8: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x1091f8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1091fc: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1091fcu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109200: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x109200u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109204: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109204u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109208: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109208u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10920c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x109210: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x109214: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x109214u;
    {
        const bool branch_taken_0x109214 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109214u;
            // 0x109218: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109214) {
            ctx->pc = 0x1091C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1091c4;
        }
    }
    ctx->pc = 0x10921Cu;
    // 0x10921c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109220: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109224: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109228: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x109228u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10922c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x10922Cu;
    {
        const bool branch_taken_0x10922c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10922Cu;
            // 0x109230: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10922c) {
            ctx->pc = 0x1091C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1091c4;
        }
    }
    ctx->pc = 0x109234u;
    // 0x109234: 0x3e00008  jr          $ra
    ctx->pc = 0x109234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10923Cu;
}
