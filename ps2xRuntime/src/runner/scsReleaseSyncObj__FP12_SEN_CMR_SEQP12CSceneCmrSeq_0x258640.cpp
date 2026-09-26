#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsReleaseSyncObj__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258640 - 0x258694
void scsReleaseSyncObj__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsReleaseSyncObj__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258640");
#endif

    switch (ctx->pc) {
        case 0x258664u: goto label_258664;
        case 0x258680u: goto label_258680;
        default: break;
    }

    ctx->pc = 0x258640u;

    // 0x258640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x258644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25864c: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x25864cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
    // 0x258650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x258650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258654: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x258654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x258658: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x258658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25865c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25865Cu;
    SET_GPR_U32(ctx, 31, 0x258664u);
    ctx->pc = 0x258660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25865Cu;
            // 0x258660: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258664u; }
        if (ctx->pc != 0x258664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258664u; }
        if (ctx->pc != 0x258664u) { return; }
    }
    ctx->pc = 0x258664u;
label_258664:
    // 0x258664: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x258664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x258668: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x258668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25866c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x25866cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x258670: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x258670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x258674: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x258674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
    // 0x258678: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x258678u;
    SET_GPR_U32(ctx, 31, 0x258680u);
    ctx->pc = 0x25867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258678u;
            // 0x25867c: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258680u; }
        if (ctx->pc != 0x258680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258680u; }
        if (ctx->pc != 0x258680u) { return; }
    }
    ctx->pc = 0x258680u;
label_258680:
    // 0x258680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25868c: 0x3e00008  jr          $ra
    ctx->pc = 0x25868Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25868Cu;
            // 0x258690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258694u;
}
