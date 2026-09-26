#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsPhotoSpace__15CInventUserDataFPi
// Address: 0x1feb00 - 0x1feb64
void IsPhotoSpace__15CInventUserDataFPi_0x1feb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsPhotoSpace__15CInventUserDataFPi_0x1feb00");
#endif

    switch (ctx->pc) {
        case 0x1feb08u: goto label_1feb08;
        default: break;
    }

    ctx->pc = 0x1feb00u;

    // 0x1feb00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1feb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1feb04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feb08:
    // 0x1feb08: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1feb0c: 0x80420408  lb          $v0, 0x408($v0)
    ctx->pc = 0x1feb0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1032)));
    // 0x1feb10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FEB10u;
    {
        const bool branch_taken_0x1feb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB10u;
            // 0x1feb14: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb10) {
            ctx->pc = 0x1FEB48u;
            goto label_1feb48;
        }
    }
    ctx->pc = 0x1FEB18u;
    // 0x1feb18: 0x61b40  sll         $v1, $a2, 13
    ctx->pc = 0x1feb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 13));
    // 0x1feb1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1feb20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1feb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1feb24: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1feb24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1feb28: 0x24630d60  addiu       $v1, $v1, 0xD60
    ctx->pc = 0x1feb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3424));
    // 0x1feb2c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x1feb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1feb30: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEB30u;
    {
        const bool branch_taken_0x1feb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB30u;
            // 0x1feb34: 0xac43041c  sw          $v1, 0x41C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb30) {
            ctx->pc = 0x1FEB3Cu;
            goto label_1feb3c;
        }
    }
    ctx->pc = 0x1FEB38u;
    // 0x1feb38: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1feb38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1feb3c:
    // 0x1feb3c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1feb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1feb40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEB40u;
    {
        const bool branch_taken_0x1feb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB40u;
            // 0x1feb44: 0x24420408  addiu       $v0, $v0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb40) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB48u;
label_1feb48:
    // 0x1feb48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1feb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1feb4c: 0x28c2001e  slti        $v0, $a2, 0x1E
    ctx->pc = 0x1feb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1feb50: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FEB50u;
    {
        const bool branch_taken_0x1feb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB50u;
            // 0x1feb54: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb50) {
            ctx->pc = 0x1FEB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1feb08;
        }
    }
    ctx->pc = 0x1FEB58u;
    // 0x1feb58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1feb58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feb5c:
    // 0x1feb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEB64u;
}
