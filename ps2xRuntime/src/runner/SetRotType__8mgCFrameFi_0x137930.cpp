#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotType__8mgCFrameFi
// Address: 0x137930 - 0x137950
void SetRotType__8mgCFrameFi_0x137930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotType__8mgCFrameFi_0x137930");
#endif

    ctx->pc = 0x137930u;

    // 0x137930: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x137930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x137934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x137934u;
    {
        const bool branch_taken_0x137934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137934u;
            // 0x137938: 0xac850100  sw          $a1, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137934) {
            ctx->pc = 0x137948u;
            goto label_137948;
        }
    }
    ctx->pc = 0x13793Cu;
    // 0x13793c: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x13793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x137940: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x137940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x137944: 0xac830100  sw          $v1, 0x100($a0)
    ctx->pc = 0x137944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
label_137948:
    // 0x137948: 0x3e00008  jr          $ra
    ctx->pc = 0x137948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137950u;
}
