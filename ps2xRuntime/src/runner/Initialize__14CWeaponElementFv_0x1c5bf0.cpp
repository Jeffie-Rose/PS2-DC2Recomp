#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CWeaponElementFv
// Address: 0x1c5bf0 - 0x1c5c58
void Initialize__14CWeaponElementFv_0x1c5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CWeaponElementFv_0x1c5bf0");
#endif

    switch (ctx->pc) {
        case 0x1c5bfcu: goto label_1c5bfc;
        default: break;
    }

    ctx->pc = 0x1c5bf0u;

    // 0x1c5bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bf8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1c5bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1c5bfc:
    // 0x1c5bfc: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1c5bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c5c00: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1c5c04: 0xad050420  sw          $a1, 0x420($t0)
    ctx->pc = 0x1c5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1056), GPR_U32(ctx, 5));
    // 0x1c5c08: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x1c5c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c5c0c: 0xad050520  sw          $a1, 0x520($t0)
    ctx->pc = 0x1c5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1312), GPR_U32(ctx, 5));
    // 0x1c5c10: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1c5c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1c5c14: 0xad050424  sw          $a1, 0x424($t0)
    ctx->pc = 0x1c5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1060), GPR_U32(ctx, 5));
    // 0x1c5c18: 0xad050524  sw          $a1, 0x524($t0)
    ctx->pc = 0x1c5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1316), GPR_U32(ctx, 5));
    // 0x1c5c1c: 0xad050428  sw          $a1, 0x428($t0)
    ctx->pc = 0x1c5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1064), GPR_U32(ctx, 5));
    // 0x1c5c20: 0xad050528  sw          $a1, 0x528($t0)
    ctx->pc = 0x1c5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1320), GPR_U32(ctx, 5));
    // 0x1c5c24: 0xad05042c  sw          $a1, 0x42C($t0)
    ctx->pc = 0x1c5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1068), GPR_U32(ctx, 5));
    // 0x1c5c28: 0xad05052c  sw          $a1, 0x52C($t0)
    ctx->pc = 0x1c5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1324), GPR_U32(ctx, 5));
    // 0x1c5c2c: 0xad050430  sw          $a1, 0x430($t0)
    ctx->pc = 0x1c5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1072), GPR_U32(ctx, 5));
    // 0x1c5c30: 0xad050530  sw          $a1, 0x530($t0)
    ctx->pc = 0x1c5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1328), GPR_U32(ctx, 5));
    // 0x1c5c34: 0xad050434  sw          $a1, 0x434($t0)
    ctx->pc = 0x1c5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1076), GPR_U32(ctx, 5));
    // 0x1c5c38: 0xad050534  sw          $a1, 0x534($t0)
    ctx->pc = 0x1c5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1332), GPR_U32(ctx, 5));
    // 0x1c5c3c: 0xad050438  sw          $a1, 0x438($t0)
    ctx->pc = 0x1c5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1080), GPR_U32(ctx, 5));
    // 0x1c5c40: 0xad050538  sw          $a1, 0x538($t0)
    ctx->pc = 0x1c5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1336), GPR_U32(ctx, 5));
    // 0x1c5c44: 0xad05043c  sw          $a1, 0x43C($t0)
    ctx->pc = 0x1c5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1084), GPR_U32(ctx, 5));
    // 0x1c5c48: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C5C48u;
    {
        const bool branch_taken_0x1c5c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C48u;
            // 0x1c5c4c: 0xad05053c  sw          $a1, 0x53C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c48) {
            ctx->pc = 0x1C5BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5bfc;
        }
    }
    ctx->pc = 0x1C5C50u;
    // 0x1c5c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C50u;
            // 0x1c5c54: 0xa48005ac  sh          $zero, 0x5AC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1452), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5C58u;
}
