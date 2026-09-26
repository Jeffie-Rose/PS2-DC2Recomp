#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSceneCmrSeq__FP12_SEN_CMR_SEQ
// Address: 0x259100 - 0x259154
void InitSceneCmrSeq__FP12_SEN_CMR_SEQ_0x259100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSceneCmrSeq__FP12_SEN_CMR_SEQ_0x259100");
#endif

    switch (ctx->pc) {
        case 0x25911cu: goto label_25911c;
        case 0x259124u: goto label_259124;
        case 0x259140u: goto label_259140;
        default: break;
    }

    ctx->pc = 0x259100u;

    // 0x259100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25910c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25910cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x259110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259114: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259114u;
    SET_GPR_U32(ctx, 31, 0x25911Cu);
    ctx->pc = 0x259118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259114u;
            // 0x259118: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25911Cu; }
        if (ctx->pc != 0x25911Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25911Cu; }
        if (ctx->pc != 0x25911Cu) { return; }
    }
    ctx->pc = 0x25911Cu;
label_25911c:
    // 0x25911c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25911Cu;
    SET_GPR_U32(ctx, 31, 0x259124u);
    ctx->pc = 0x259120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25911Cu;
            // 0x259120: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259124u; }
        if (ctx->pc != 0x259124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259124u; }
        if (ctx->pc != 0x259124u) { return; }
    }
    ctx->pc = 0x259124u;
label_259124:
    // 0x259124: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x259124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x259128: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x259128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25912c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x25912cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x259130: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x259130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x259134: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x259134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
    // 0x259138: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x259138u;
    SET_GPR_U32(ctx, 31, 0x259140u);
    ctx->pc = 0x25913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259138u;
            // 0x25913c: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259140u; }
        if (ctx->pc != 0x259140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259140u; }
        if (ctx->pc != 0x259140u) { return; }
    }
    ctx->pc = 0x259140u;
label_259140:
    // 0x259140: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x259140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x259144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25914c: 0x3e00008  jr          $ra
    ctx->pc = 0x25914Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25914Cu;
            // 0x259150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259154u;
}
