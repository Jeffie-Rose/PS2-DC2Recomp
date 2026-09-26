#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSceneObjSeq__FP12_SEN_OBJ_SEQ
// Address: 0x25c170 - 0x25c1bc
void InitSceneObjSeq__FP12_SEN_OBJ_SEQ_0x25c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSceneObjSeq__FP12_SEN_OBJ_SEQ_0x25c170");
#endif

    switch (ctx->pc) {
        case 0x25c18cu: goto label_25c18c;
        case 0x25c1a8u: goto label_25c1a8;
        default: break;
    }

    ctx->pc = 0x25c170u;

    // 0x25c170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c17c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25c180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c184: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C184u;
    SET_GPR_U32(ctx, 31, 0x25C18Cu);
    ctx->pc = 0x25C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C184u;
            // 0x25c188: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C18Cu; }
        if (ctx->pc != 0x25C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C18Cu; }
        if (ctx->pc != 0x25C18Cu) { return; }
    }
    ctx->pc = 0x25C18Cu;
label_25c18c:
    // 0x25c18c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x25c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x25c190: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x25c190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25c194: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25c194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25c198: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x25c198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x25c19c: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
    // 0x25c1a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25C1A0u;
    SET_GPR_U32(ctx, 31, 0x25C1A8u);
    ctx->pc = 0x25C1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1A0u;
            // 0x25c1a4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1A8u; }
        if (ctx->pc != 0x25C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1A8u; }
        if (ctx->pc != 0x25C1A8u) { return; }
    }
    ctx->pc = 0x25C1A8u;
label_25c1a8:
    // 0x25c1a8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x25c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x25c1ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1B4u;
            // 0x25c1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C1BCu;
}
