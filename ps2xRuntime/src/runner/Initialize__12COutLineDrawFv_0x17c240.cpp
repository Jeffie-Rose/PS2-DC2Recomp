#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12COutLineDrawFv
// Address: 0x17c240 - 0x17c2ac
void Initialize__12COutLineDrawFv_0x17c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12COutLineDrawFv_0x17c240");
#endif

    switch (ctx->pc) {
        case 0x17c258u: goto label_17c258;
        case 0x17c260u: goto label_17c260;
        default: break;
    }

    ctx->pc = 0x17c240u;

    // 0x17c240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c250: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17C250u;
    SET_GPR_U32(ctx, 31, 0x17C258u);
    ctx->pc = 0x17C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C250u;
            // 0x17c254: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C258u; }
        if (ctx->pc != 0x17C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C258u; }
        if (ctx->pc != 0x17C258u) { return; }
    }
    ctx->pc = 0x17C258u;
label_17c258:
    // 0x17c258: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17C258u;
    SET_GPR_U32(ctx, 31, 0x17C260u);
    ctx->pc = 0x17C25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C258u;
            // 0x17c25c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C260u; }
        if (ctx->pc != 0x17C260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C260u; }
        if (ctx->pc != 0x17C260u) { return; }
    }
    ctx->pc = 0x17C260u;
label_17c260:
    // 0x17c260: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17c260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17c264: 0x3c0642a0  lui         $a2, 0x42A0
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17056 << 16));
    // 0x17c268: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17c268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17c26c: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x17c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x17c270: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17c270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17c274: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x17c274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x17c278: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17c278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17c27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c280: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x17c280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x17c284: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x17c284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x17c288: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x17c288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x17c28c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x17c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x17c290: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x17c290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x17c294: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x17c294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x17c298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17c298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17c29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2A4u;
            // 0x17c2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C2ACu;
}
