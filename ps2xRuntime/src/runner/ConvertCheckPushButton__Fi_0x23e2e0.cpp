#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertCheckPushButton__Fi
// Address: 0x23e2e0 - 0x23e314
void ConvertCheckPushButton__Fi_0x23e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertCheckPushButton__Fi_0x23e2e0");
#endif

    ctx->pc = 0x23e2e0u;

    // 0x23e2e0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x23e2e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E2E4u;
    {
        const bool branch_taken_0x23e2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e2e4) {
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E2ECu;
    // 0x23e2ec: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E2ECu;
    {
        const bool branch_taken_0x23e2ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2ECu;
            // 0x23e2f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2ec) {
            ctx->pc = 0x23E30Cu;
            goto label_23e30c;
        }
    }
    ctx->pc = 0x23E2F4u;
    // 0x23e2f4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x23e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x23e2f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E2F8u;
    {
        const bool branch_taken_0x23e2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2F8u;
            // 0x23e2fc: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2f8) {
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E300u;
    // 0x23e300: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23e300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23e304: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x23e304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_23e308:
    // 0x23e308: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23e308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e30c:
    // 0x23e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E314u;
}
