#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetViewFlag__17CScoopDataManagerFii
// Address: 0x1ff500 - 0x1ff530
void SetViewFlag__17CScoopDataManagerFii_0x1ff500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewFlag__17CScoopDataManagerFii_0x1ff500");
#endif

    switch (ctx->pc) {
        case 0x1ff514u: goto label_1ff514;
        default: break;
    }

    ctx->pc = 0x1ff500u;

    // 0x1ff500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff50c: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x1FF50Cu;
    SET_GPR_U32(ctx, 31, 0x1FF514u);
    ctx->pc = 0x1FF510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF50Cu;
            // 0x1ff510: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF514u; }
        if (ctx->pc != 0x1FF514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF514u; }
        if (ctx->pc != 0x1FF514u) { return; }
    }
    ctx->pc = 0x1FF514u;
label_1ff514:
    // 0x1ff514: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF514u;
    {
        const bool branch_taken_0x1ff514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff514) {
            ctx->pc = 0x1FF520u;
            goto label_1ff520;
        }
    }
    ctx->pc = 0x1FF51Cu;
    // 0x1ff51c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1ff51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1ff520:
    // 0x1ff520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff528: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF528u;
            // 0x1ff52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF530u;
}
