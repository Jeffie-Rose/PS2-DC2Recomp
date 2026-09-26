#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGyouAlpha__6ClsMesFi
// Address: 0x159950 - 0x159a18
void GetGyouAlpha__6ClsMesFi_0x159950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGyouAlpha__6ClsMesFi_0x159950");
#endif

    ctx->pc = 0x159950u;

    // 0x159950: 0x8c821b14  lw          $v0, 0x1B14($a0)
    ctx->pc = 0x159950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6932)));
    // 0x159954: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x159954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159958: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x159958u;
    {
        const bool branch_taken_0x159958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159958u;
            // 0x15995c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159958) {
            ctx->pc = 0x159968u;
            goto label_159968;
        }
    }
    ctx->pc = 0x159960u;
    // 0x159960: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x159960u;
    {
        const bool branch_taken_0x159960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159960u;
            // 0x159964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159960) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x159968u;
label_159968:
    // 0x159968: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x159968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15996c: 0x8c421c84  lw          $v0, 0x1C84($v0)
    ctx->pc = 0x15996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7300)));
    // 0x159970: 0x4410027  bgez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x159970u;
    {
        const bool branch_taken_0x159970 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x159970) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x159978u;
    // 0x159978: 0x8c861ae4  lw          $a2, 0x1AE4($a0)
    ctx->pc = 0x159978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6884)));
    // 0x15997c: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x15997cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x159980: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x159980u;
    {
        const bool branch_taken_0x159980 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x159984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159980u;
            // 0x159984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159980) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x159988u;
    // 0x159988: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x159988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x15998c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159990: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159990u;
    {
        const bool branch_taken_0x159990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159990u;
            // 0x159994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159990) {
            ctx->pc = 0x1599A0u;
            goto label_1599a0;
        }
    }
    ctx->pc = 0x159998u;
    // 0x159998: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x159998u;
    {
        const bool branch_taken_0x159998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159998) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x1599A0u;
label_1599a0:
    // 0x1599a0: 0x8c841af8  lw          $a0, 0x1AF8($a0)
    ctx->pc = 0x1599a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6904)));
    // 0x1599a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1599a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1599a8: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1599A8u;
    {
        const bool branch_taken_0x1599a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1599ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1599A8u;
            // 0x1599ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599a8) {
            ctx->pc = 0x1599F0u;
            goto label_1599f0;
        }
    }
    ctx->pc = 0x1599B0u;
    // 0x1599b0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1599B0u;
    {
        const bool branch_taken_0x1599b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1599b0) {
            ctx->pc = 0x1599D4u;
            goto label_1599d4;
        }
    }
    ctx->pc = 0x1599B8u;
    // 0x1599b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1599b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1599bc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1599BCu;
    {
        const bool branch_taken_0x1599bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1599C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1599BCu;
            // 0x1599c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599bc) {
            ctx->pc = 0x1599CCu;
            goto label_1599cc;
        }
    }
    ctx->pc = 0x1599C4u;
    // 0x1599c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1599C4u;
    {
        const bool branch_taken_0x1599c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1599C4u;
            // 0x1599c8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599c4) {
            ctx->pc = 0x159A04u;
            goto label_159a04;
        }
    }
    ctx->pc = 0x1599CCu;
label_1599cc:
    // 0x1599cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1599CCu;
    {
        const bool branch_taken_0x1599cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1599cc) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x1599D4u;
label_1599d4:
    // 0x1599d4: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1599D4u;
    {
        const bool branch_taken_0x1599d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1599d4) {
            ctx->pc = 0x1599E4u;
            goto label_1599e4;
        }
    }
    ctx->pc = 0x1599DCu;
    // 0x1599dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1599DCu;
    {
        const bool branch_taken_0x1599dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1599dc) {
            ctx->pc = 0x1599E8u;
            goto label_1599e8;
        }
    }
    ctx->pc = 0x1599E4u;
label_1599e4:
    // 0x1599e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1599e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1599e8:
    // 0x1599e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1599E8u;
    {
        const bool branch_taken_0x1599e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1599e8) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x1599F0u;
label_1599f0:
    // 0x1599f0: 0x14a60002  bne         $a1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1599F0u;
    {
        const bool branch_taken_0x1599f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1599F0u;
            // 0x1599f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599f0) {
            ctx->pc = 0x1599FCu;
            goto label_1599fc;
        }
    }
    ctx->pc = 0x1599F8u;
    // 0x1599f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1599f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1599fc:
    // 0x1599fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1599FCu;
    {
        const bool branch_taken_0x1599fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1599fc) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x159A04u;
label_159a04:
    // 0x159a04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x159a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x159a08: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x159A08u;
    {
        const bool branch_taken_0x159a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A08u;
            // 0x159a0c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a08) {
            ctx->pc = 0x159A10u;
            goto label_159a10;
        }
    }
    ctx->pc = 0x159A10u;
label_159a10:
    // 0x159a10: 0x3e00008  jr          $ra
    ctx->pc = 0x159A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159A18u;
}
