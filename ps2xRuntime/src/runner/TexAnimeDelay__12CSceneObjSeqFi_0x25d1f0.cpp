#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexAnimeDelay__12CSceneObjSeqFi
// Address: 0x25d1f0 - 0x25d224
void TexAnimeDelay__12CSceneObjSeqFi_0x25d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexAnimeDelay__12CSceneObjSeqFi_0x25d1f0");
#endif

    switch (ctx->pc) {
        case 0x25d204u: goto label_25d204;
        default: break;
    }

    ctx->pc = 0x25d1f0u;

    // 0x25d1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d1fc: 0xc097148  jal         func_25C520
    ctx->pc = 0x25D1FCu;
    SET_GPR_U32(ctx, 31, 0x25D204u);
    ctx->pc = 0x25D200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D1FCu;
            // 0x25d200: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C520u;
    if (runtime->hasFunction(0x25C520u)) {
        auto targetFn = runtime->lookupFunction(0x25C520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D204u; }
        if (ctx->pc != 0x25D204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAnmSeq__12CSceneObjSeqFv_0x25c520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D204u; }
        if (ctx->pc != 0x25D204u) { return; }
    }
    ctx->pc = 0x25D204u;
label_25d204:
    // 0x25d204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D204u;
    {
        const bool branch_taken_0x25d204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D204u;
            // 0x25d208: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d204) {
            ctx->pc = 0x25D214u;
            goto label_25d214;
        }
    }
    ctx->pc = 0x25D20Cu;
    // 0x25d20c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d210: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25d210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25d214:
    // 0x25d214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D21Cu;
            // 0x25d220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D224u;
}
