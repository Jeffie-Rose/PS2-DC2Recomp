#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: neta_sort__FiiiPi
// Address: 0x2085b0 - 0x2086dc
void neta_sort__FiiiPi_0x2085b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("neta_sort__FiiiPi_0x2085b0");
#endif

    switch (ctx->pc) {
        case 0x2085f0u: goto label_2085f0;
        case 0x208610u: goto label_208610;
        default: break;
    }

    ctx->pc = 0x2085b0u;

    // 0x2085b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2085b4: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2085b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2085b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2085b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2085bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2085bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2085c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2085c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2085c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2085c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2085c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2085cc: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x2085CCu;
    {
        const bool branch_taken_0x2085cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2085CCu;
            // 0x2085d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085cc) {
            ctx->pc = 0x2086BCu;
            goto label_2086bc;
        }
    }
    ctx->pc = 0x2085D4u;
    // 0x2085d4: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2085d8: 0x56040  sll         $t4, $a1, 1
    ctx->pc = 0x2085d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2085dc: 0x3c1201ed  lui         $s2, 0x1ED
    ctx->pc = 0x2085dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)493 << 16));
    // 0x2085e0: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x2085e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
    // 0x2085e4: 0x2652b7d0  addiu       $s2, $s2, -0x4830
    ctx->pc = 0x2085e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948816));
    // 0x2085e8: 0x2631bfd0  addiu       $s1, $s1, -0x4030
    ctx->pc = 0x2085e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950864));
    // 0x2085ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2085f0:
    // 0x2085f0: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x2085f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2085f4: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x2085f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2085f8: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2085F8u;
    {
        const bool branch_taken_0x2085f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2085F8u;
            // 0x2085fc: 0x84880  sll         $t1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085f8) {
            ctx->pc = 0x2086A4u;
            goto label_2086a4;
        }
    }
    ctx->pc = 0x208600u;
    // 0x208600: 0x85040  sll         $t2, $t0, 1
    ctx->pc = 0x208600u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x208604: 0xeb7021  addu        $t6, $a3, $t3
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x208608: 0x24b6821  addu        $t5, $s2, $t3
    ctx->pc = 0x208608u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x20860c: 0x22c7821  addu        $t7, $s1, $t4
    ctx->pc = 0x20860cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
label_208610:
    // 0x208610: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208610u;
    {
        const bool branch_taken_0x208610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x208614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208610u;
            // 0x208614: 0xe9c021  addu        $t8, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208610) {
            ctx->pc = 0x20862Cu;
            goto label_20862c;
        }
    }
    ctx->pc = 0x208618u;
    // 0x208618: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x20861c: 0x8f180000  lw          $t8, 0x0($t8)
    ctx->pc = 0x20861cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x208620: 0x310802a  slt         $s0, $t8, $s0
    ctx->pc = 0x208620u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x208624: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208624u;
    {
        const bool branch_taken_0x208624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208624) {
            ctx->pc = 0x20864Cu;
            goto label_20864c;
        }
    }
    ctx->pc = 0x20862Cu;
label_20862c:
    // 0x20862c: 0x0  nop
    ctx->pc = 0x20862cu;
    // NOP
    // 0x208630: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x208630u;
    {
        const bool branch_taken_0x208630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x208634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208630u;
            // 0x208634: 0xe9c021  addu        $t8, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208630) {
            ctx->pc = 0x208690u;
            goto label_208690;
        }
    }
    ctx->pc = 0x208638u;
    // 0x208638: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x208638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x20863c: 0x8f180000  lw          $t8, 0x0($t8)
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x208640: 0x310082a  slt         $at, $t8, $s0
    ctx->pc = 0x208640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x208644: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x208644u;
    {
        const bool branch_taken_0x208644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208644) {
            ctx->pc = 0x208690u;
            goto label_208690;
        }
    }
    ctx->pc = 0x20864Cu;
label_20864c:
    // 0x20864c: 0x0  nop
    ctx->pc = 0x20864cu;
    // NOP
    // 0x208650: 0x2499821  addu        $s3, $s2, $t1
    ctx->pc = 0x208650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x208654: 0x8db90000  lw          $t9, 0x0($t5)
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x208658: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x20865c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x20865cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x208660: 0x22ac021  addu        $t8, $s1, $t2
    ctx->pc = 0x208660u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x208664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208668: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x208668u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x20866c: 0xae790000  sw          $t9, 0x0($s3)
    ctx->pc = 0x20866cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 25));
    // 0x208670: 0x8dd90000  lw          $t9, 0x0($t6)
    ctx->pc = 0x208670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x208674: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x208678: 0xadd00000  sw          $s0, 0x0($t6)
    ctx->pc = 0x208678u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 16));
    // 0x20867c: 0xae990000  sw          $t9, 0x0($s4)
    ctx->pc = 0x20867cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 25));
    // 0x208680: 0x85f00000  lh          $s0, 0x0($t7)
    ctx->pc = 0x208680u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x208684: 0x87190000  lh          $t9, 0x0($t8)
    ctx->pc = 0x208684u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x208688: 0xa5f90000  sh          $t9, 0x0($t7)
    ctx->pc = 0x208688u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x20868c: 0xa7100000  sh          $s0, 0x0($t8)
    ctx->pc = 0x20868cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 16));
label_208690:
    // 0x208690: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x208694: 0x106c02a  slt         $t8, $t0, $a2
    ctx->pc = 0x208694u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x208698: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x20869c: 0x1700ffdc  bnez        $t8, . + 4 + (-0x24 << 2)
    ctx->pc = 0x20869Cu;
    {
        const bool branch_taken_0x20869c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20869Cu;
            // 0x2086a0: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20869c) {
            ctx->pc = 0x208610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208610;
        }
    }
    ctx->pc = 0x2086A4u;
label_2086a4:
    // 0x2086a4: 0x0  nop
    ctx->pc = 0x2086a4u;
    // NOP
    // 0x2086a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2086a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2086ac: 0xa6402a  slt         $t0, $a1, $a2
    ctx->pc = 0x2086acu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2086b0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2086b4: 0x1500ffce  bnez        $t0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2086B4u;
    {
        const bool branch_taken_0x2086b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2086B4u;
            // 0x2086b8: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086b4) {
            ctx->pc = 0x2085F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2085f0;
        }
    }
    ctx->pc = 0x2086BCu;
label_2086bc:
    // 0x2086bc: 0x0  nop
    ctx->pc = 0x2086bcu;
    // NOP
    // 0x2086c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2086c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2086c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2086c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2086c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2086c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2086cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2086ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2086d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2086d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2086d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2086D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2086D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2086D4u;
            // 0x2086d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2086DCu;
}
