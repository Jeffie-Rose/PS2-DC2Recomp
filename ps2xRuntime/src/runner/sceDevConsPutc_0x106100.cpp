#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsPutc
// Address: 0x106100 - 0x10614c
void sceDevConsPutc_0x106100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPutc_0x106100");
#endif

    ctx->pc = 0x106100u;

    // 0x106100: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x106100u;
    {
        const bool branch_taken_0x106100 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x106104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106100u;
            // 0x106104: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106100) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x106108u;
    // 0x106108: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10610c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x10610cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x106110: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106110u;
    {
        const bool branch_taken_0x106110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106110) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x106118u;
    // 0x106118: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x106118u;
    {
        const bool branch_taken_0x106118 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x106118) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x106120u;
    // 0x106120: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x106120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106124: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x106124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106128: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106128u;
    {
        const bool branch_taken_0x106128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106128u;
            // 0x10612c: 0xc34018  mult        $t0, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106128) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x106130u;
    // 0x106130: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x106130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106134: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x106138: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10613c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106140: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x106140u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_106144:
    // 0x106144: 0x3e00008  jr          $ra
    ctx->pc = 0x106144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10614Cu;
}
