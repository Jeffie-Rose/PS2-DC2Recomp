#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MotionDelay__12CSceneObjSeqFi
// Address: 0x25cee0 - 0x25cf14
void MotionDelay__12CSceneObjSeqFi_0x25cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionDelay__12CSceneObjSeqFi_0x25cee0");
#endif

    switch (ctx->pc) {
        case 0x25cef4u: goto label_25cef4;
        default: break;
    }

    ctx->pc = 0x25cee0u;

    // 0x25cee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ceec: 0xc097130  jal         func_25C4C0
    ctx->pc = 0x25CEECu;
    SET_GPR_U32(ctx, 31, 0x25CEF4u);
    ctx->pc = 0x25CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CEECu;
            // 0x25cef0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C4C0u;
    if (runtime->hasFunction(0x25C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEF4u; }
        if (ctx->pc != 0x25CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEF4u; }
        if (ctx->pc != 0x25CEF4u) { return; }
    }
    ctx->pc = 0x25CEF4u;
label_25cef4:
    // 0x25cef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CEF4u;
    {
        const bool branch_taken_0x25cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CEF4u;
            // 0x25cef8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cef4) {
            ctx->pc = 0x25CF04u;
            goto label_25cf04;
        }
    }
    ctx->pc = 0x25CEFCu;
    // 0x25cefc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cf00: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25cf04:
    // 0x25cf04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF0Cu;
            // 0x25cf10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CF14u;
}
