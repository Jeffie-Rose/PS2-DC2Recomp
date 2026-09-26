#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTagProgSize__6CMovieFii
// Address: 0x298ff0 - 0x299044
void GetTagProgSize__6CMovieFii_0x298ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTagProgSize__6CMovieFii_0x298ff0");
#endif

    ctx->pc = 0x298ff0u;

    // 0x298ff0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x298FF0u;
    {
        const bool branch_taken_0x298ff0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x298FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298FF0u;
            // 0x298ff4: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ff0) {
            ctx->pc = 0x299000u;
            goto label_299000;
        }
    }
    ctx->pc = 0x298FF8u;
    // 0x298ff8: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x298ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x298ffc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x298ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_299000:
    // 0x299000: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x299000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x299004: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299004u;
    {
        const bool branch_taken_0x299004 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x299008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299004u;
            // 0x299008: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299004) {
            ctx->pc = 0x299014u;
            goto label_299014;
        }
    }
    ctx->pc = 0x29900Cu;
    // 0x29900c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x299010: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x299010u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_299014:
    // 0x299014: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x299014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x299018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29901c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x29901cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x299020: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x299020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x299024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x299024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x299028: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x299028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x29902c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29902Cu;
    {
        const bool branch_taken_0x29902c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x299030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29902Cu;
            // 0x299030: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29902c) {
            ctx->pc = 0x29903Cu;
            goto label_29903c;
        }
    }
    ctx->pc = 0x299034u;
    // 0x299034: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x299034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x299038: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x299038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_29903c:
    // 0x29903c: 0x3e00008  jr          $ra
    ctx->pc = 0x29903Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29903Cu;
            // 0x299040: 0x21200  sll         $v0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299044u;
}
