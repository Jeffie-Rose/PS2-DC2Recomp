#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachCamera__12CSceneObjSeqFfi
// Address: 0x25ccd0 - 0x25cd14
void AttachCamera__12CSceneObjSeqFfi_0x25ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachCamera__12CSceneObjSeqFfi_0x25ccd0");
#endif

    switch (ctx->pc) {
        case 0x25ccecu: goto label_25ccec;
        default: break;
    }

    ctx->pc = 0x25ccd0u;

    // 0x25ccd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ccd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ccd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ccdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25ccdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25cce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25cce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cce4: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CCE4u;
    SET_GPR_U32(ctx, 31, 0x25CCECu);
    ctx->pc = 0x25CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCE4u;
            // 0x25cce8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCECu; }
        if (ctx->pc != 0x25CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCECu; }
        if (ctx->pc != 0x25CCECu) { return; }
    }
    ctx->pc = 0x25CCECu;
label_25ccec:
    // 0x25ccec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CCECu;
    {
        const bool branch_taken_0x25ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCECu;
            // 0x25ccf0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccec) {
            ctx->pc = 0x25CD00u;
            goto label_25cd00;
        }
    }
    ctx->pc = 0x25CCF4u;
    // 0x25ccf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25ccf8: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x25ccf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x25ccfc: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x25ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
label_25cd00:
    // 0x25cd00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25cd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cd04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25cd08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25cd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD0Cu;
            // 0x25cd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CD14u;
}
