#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: chaMemFree
// Address: 0x1063d8 - 0x1064f0
void chaMemFree_0x1063d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chaMemFree_0x1063d8");
#endif

    switch (ctx->pc) {
        case 0x106418u: goto label_106418;
        default: break;
    }

    ctx->pc = 0x1063d8u;

    // 0x1063d8: 0x3c0c0032  lui         $t4, 0x32
    ctx->pc = 0x1063d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)50 << 16));
    // 0x1063dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1063dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1063e0: 0x8d856420  lw          $a1, 0x6420($t4)
    ctx->pc = 0x1063e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 25632)));
    // 0x1063e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1063e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1063e8: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x1063e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1063ec: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1063ECu;
    {
        const bool branch_taken_0x1063ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1063F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1063ECu;
            // 0x1063f0: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063ec) {
            ctx->pc = 0x1064E8u;
            goto label_1064e8;
        }
    }
    ctx->pc = 0x1063F4u;
    // 0x1063f4: 0x1140003c  beqz        $t2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1063F4u;
    {
        const bool branch_taken_0x1063f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1063F4u;
            // 0x1063f8: 0x51f02  srl         $v1, $a1, 28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063f4) {
            ctx->pc = 0x1064E8u;
            goto label_1064e8;
        }
    }
    ctx->pc = 0x1063FCu;
    // 0x1063fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1063fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106404: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x106404u;
    {
        const bool branch_taken_0x106404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106404u;
            // 0x106408: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106404) {
            ctx->pc = 0x1064E8u;
            goto label_1064e8;
        }
    }
    ctx->pc = 0x10640Cu;
    // 0x10640c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106410: 0x25896420  addiu       $t1, $t4, 0x6420
    ctx->pc = 0x106410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 25632));
    // 0x106414: 0x0  nop
    ctx->pc = 0x106414u;
    // NOP
label_106418:
    // 0x106418: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x10641c: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x106420: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x106420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x106424: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x106424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x106428: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x106428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x10642c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x106430: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x106430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x106434: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x106434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106438: 0x15430021  bne         $t2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x106438u;
    {
        const bool branch_taken_0x106438 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x10643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106438u;
            // 0x10643c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106438) {
            ctx->pc = 0x1064C0u;
            goto label_1064c0;
        }
    }
    ctx->pc = 0x106440u;
    // 0x106440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106444: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x106444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x106448: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10644c: 0x21f02  srl         $v1, $v0, 28
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x106450: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x106450u;
    {
        const bool branch_taken_0x106450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x106450) {
            ctx->pc = 0x106454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106450u;
            // 0x106454: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10647Cu;
            goto label_10647c;
        }
    }
    ctx->pc = 0x106458u;
    // 0x106458: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x106458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x10645c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x10645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x106460: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x106460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x106464: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x106464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x106468: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x106468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x10646c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x106470: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x106470u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x106474: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x106474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106478: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x106478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_10647c:
    // 0x10647c: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x10647cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x106480: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x106480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106484: 0x51702  srl         $v0, $a1, 28
    ctx->pc = 0x106484u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x106488: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x106488u;
    {
        const bool branch_taken_0x106488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106488u;
            // 0x10648c: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106488) {
            ctx->pc = 0x1064B8u;
            goto label_1064b8;
        }
    }
    ctx->pc = 0x106490u;
    // 0x106490: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x106490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x106494: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x106494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x106498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10649c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1064a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1064a4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1064a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1064a8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1064a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1064ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1064acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1064b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1064B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064B0u;
            // 0x1064b4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1064B8u;
label_1064b8:
    // 0x1064b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1064B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064B8u;
            // 0x1064bc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1064C0u;
label_1064c0:
    // 0x1064c0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1064c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1064c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1064c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1064c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064cc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1064ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1064d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1064d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064d4: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x1064d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1064d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1064d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1064dc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1064dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1064e0: 0x1444ffcd  bne         $v0, $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1064E0u;
    {
        const bool branch_taken_0x1064e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1064E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064E0u;
            // 0x1064e4: 0x25896420  addiu       $t1, $t4, 0x6420 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 25632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064e0) {
            ctx->pc = 0x106418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106418;
        }
    }
    ctx->pc = 0x1064E8u;
label_1064e8:
    // 0x1064e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1064E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1064F0u;
}
