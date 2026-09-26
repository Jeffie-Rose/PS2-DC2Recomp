#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLoopSe__11CLoopSeMngrFPiUii
// Address: 0x18c5b0 - 0x18c698
void GetLoopSe__11CLoopSeMngrFPiUii_0x18c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLoopSe__11CLoopSeMngrFPiUii_0x18c5b0");
#endif

    switch (ctx->pc) {
        case 0x18c5dcu: goto label_18c5dc;
        case 0x18c630u: goto label_18c630;
        default: break;
    }

    ctx->pc = 0x18c5b0u;

    // 0x18c5b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c5b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C5B4u;
    {
        const bool branch_taken_0x18c5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5B4u;
            // 0x18c5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5b4) {
            ctx->pc = 0x18C5C4u;
            goto label_18c5c4;
        }
    }
    ctx->pc = 0x18C5BCu;
    // 0x18c5bc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18C5BCu;
    {
        const bool branch_taken_0x18c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5bc) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C5C4u;
label_18c5c4:
    // 0x18c5c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x18c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x18c5c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5cc: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x18c5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c5d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18c5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18C5D4u;
    {
        const bool branch_taken_0x18c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5D4u;
            // 0x18c5d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5d4) {
            ctx->pc = 0x18C60Cu;
            goto label_18c60c;
        }
    }
    ctx->pc = 0x18C5DCu;
label_18c5dc:
    // 0x18c5dc: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18c5dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c5e0: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x18c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x18c5e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c5e8: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C5E8u;
    {
        const bool branch_taken_0x18c5e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18c5e8) {
            ctx->pc = 0x18C604u;
            goto label_18c604;
        }
    }
    ctx->pc = 0x18C5F0u;
    // 0x18c5f0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x18c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x18c5f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18c5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c5fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C5FCu;
    {
        const bool branch_taken_0x18c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5FCu;
            // 0x18c600: 0x1421021  addu        $v0, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5fc) {
            ctx->pc = 0x18C61Cu;
            goto label_18c61c;
        }
    }
    ctx->pc = 0x18C604u;
label_18c604:
    // 0x18c604: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x18c604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x18c608: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18c608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_18c60c:
    // 0x18c60c: 0x0  nop
    ctx->pc = 0x18c60cu;
    // NOP
    // 0x18c610: 0x10b182a  slt         $v1, $t0, $t3
    ctx->pc = 0x18c610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x18c614: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x18C614u;
    {
        const bool branch_taken_0x18c614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c614) {
            ctx->pc = 0x18C5DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c5dc;
        }
    }
    ctx->pc = 0x18C61Cu;
label_18c61c:
    // 0x18c61c: 0x0  nop
    ctx->pc = 0x18c61cu;
    // NOP
    // 0x18c620: 0x4c0001a  bltz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x18C620u;
    {
        const bool branch_taken_0x18c620 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C620u;
            // 0x18c624: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c620) {
            ctx->pc = 0x18C68Cu;
            goto label_18c68c;
        }
    }
    ctx->pc = 0x18C628u;
    // 0x18c628: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18C628u;
    {
        const bool branch_taken_0x18c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C628u;
            // 0x18c62c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c628) {
            ctx->pc = 0x18C67Cu;
            goto label_18c67c;
        }
    }
    ctx->pc = 0x18C630u;
label_18c630:
    // 0x18c630: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c634: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x18c634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18c638: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x18c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18c63c: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18C63Cu;
    {
        const bool branch_taken_0x18c63c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18c63c) {
            ctx->pc = 0x18C674u;
            goto label_18c674;
        }
    }
    ctx->pc = 0x18C644u;
    // 0x18c644: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18C644u;
    {
        const bool branch_taken_0x18c644 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c644) {
            ctx->pc = 0x18C674u;
            goto label_18c674;
        }
    }
    ctx->pc = 0x18C64Cu;
    // 0x18c64c: 0x85230008  lh          $v1, 0x8($t1)
    ctx->pc = 0x18c64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x18c650: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C650u;
    {
        const bool branch_taken_0x18c650 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C650u;
            // 0x18c654: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c650) {
            ctx->pc = 0x18C674u;
            goto label_18c674;
        }
    }
    ctx->pc = 0x18C658u;
    // 0x18c658: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x18c658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x18c65c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x18c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x18c660: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18c664: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18c664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c668: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c66c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C66Cu;
    {
        const bool branch_taken_0x18c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C66Cu;
            // 0x18c670: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c66c) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C674u;
label_18c674:
    // 0x18c674: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x18c674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x18c678: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18c678u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18c67c:
    // 0x18c67c: 0x0  nop
    ctx->pc = 0x18c67cu;
    // NOP
    // 0x18c680: 0x14b182a  slt         $v1, $t2, $t3
    ctx->pc = 0x18c680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x18c684: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18C684u;
    {
        const bool branch_taken_0x18c684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c684) {
            ctx->pc = 0x18C630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c630;
        }
    }
    ctx->pc = 0x18C68Cu;
label_18c68c:
    // 0x18c68c: 0x0  nop
    ctx->pc = 0x18c68cu;
    // NOP
label_18c690:
    // 0x18c690: 0x3e00008  jr          $ra
    ctx->pc = 0x18C690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C698u;
}
