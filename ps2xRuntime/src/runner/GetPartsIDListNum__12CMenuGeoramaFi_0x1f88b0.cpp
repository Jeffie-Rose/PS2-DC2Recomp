#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsIDListNum__12CMenuGeoramaFi
// Address: 0x1f88b0 - 0x1f8930
void GetPartsIDListNum__12CMenuGeoramaFi_0x1f88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsIDListNum__12CMenuGeoramaFi_0x1f88b0");
#endif

    ctx->pc = 0x1f88b0u;

    // 0x1f88b0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F88B0u;
    {
        const bool branch_taken_0x1f88b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1F88B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88B0u;
            // 0x1f88b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88b0) {
            ctx->pc = 0x1F88C0u;
            goto label_1f88c0;
        }
    }
    ctx->pc = 0x1F88B8u;
    // 0x1f88b8: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x1f88b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1f88bc: 0x0  nop
    ctx->pc = 0x1f88bcu;
    // NOP
label_1f88c0:
    // 0x1f88c0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F88C0u;
    {
        const bool branch_taken_0x1f88c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F88C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88C0u;
            // 0x1f88c4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88c0) {
            ctx->pc = 0x1F88D4u;
            goto label_1f88d4;
        }
    }
    ctx->pc = 0x1F88C8u;
    // 0x1f88c8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f88c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f88cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F88CCu;
    {
        const bool branch_taken_0x1f88cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88CCu;
            // 0x1f88d0: 0x8c22bbb8  lw          $v0, -0x4448($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88cc) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F88D4u;
label_1f88d4:
    // 0x1f88d4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F88D4u;
    {
        const bool branch_taken_0x1f88d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F88D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88D4u;
            // 0x1f88d8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88d4) {
            ctx->pc = 0x1F88ECu;
            goto label_1f88ec;
        }
    }
    ctx->pc = 0x1F88DCu;
    // 0x1f88dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f88dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f88e0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f88e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F88E4u;
    {
        const bool branch_taken_0x1f88e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88E4u;
            // 0x1f88e8: 0x8c220fbc  lw          $v0, 0xFBC($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88e4) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F88ECu;
label_1f88ec:
    // 0x1f88ec: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F88ECu;
    {
        const bool branch_taken_0x1f88ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F88F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88ECu;
            // 0x1f88f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88ec) {
            ctx->pc = 0x1F8900u;
            goto label_1f8900;
        }
    }
    ctx->pc = 0x1F88F4u;
    // 0x1f88f4: 0x8c8267b4  lw          $v0, 0x67B4($a0)
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26548)));
    // 0x1f88f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F88F8u;
    {
        const bool branch_taken_0x1f88f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88F8u;
            // 0x1f88fc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88f8) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F8900u;
label_1f8900:
    // 0x1f8900: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8900u;
    {
        const bool branch_taken_0x1f8900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8900u;
            // 0x1f8904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8900) {
            ctx->pc = 0x1F8918u;
            goto label_1f8918;
        }
    }
    ctx->pc = 0x1F8908u;
    // 0x1f8908: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f890c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f890cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8910: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8910u;
    {
        const bool branch_taken_0x1f8910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8910u;
            // 0x1f8914: 0x8c2263c0  lw          $v0, 0x63C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8910) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F8918u;
label_1f8918:
    // 0x1f8918: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8918u;
    {
        const bool branch_taken_0x1f8918 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8918u;
            // 0x1f891c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8918) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F8920u;
    // 0x1f8920: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8920u;
    {
        const bool branch_taken_0x1f8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8920u;
            // 0x1f8924: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8920) {
            ctx->pc = 0x1F8928u;
            goto label_1f8928;
        }
    }
    ctx->pc = 0x1F8928u;
label_1f8928:
    // 0x1f8928: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8930u;
}
