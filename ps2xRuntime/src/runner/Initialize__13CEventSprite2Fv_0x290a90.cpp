#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CEventSprite2Fv
// Address: 0x290a90 - 0x290b1c
void Initialize__13CEventSprite2Fv_0x290a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CEventSprite2Fv_0x290a90");
#endif

    switch (ctx->pc) {
        case 0x290ac0u: goto label_290ac0;
        case 0x290ad0u: goto label_290ad0;
        default: break;
    }

    ctx->pc = 0x290a90u;

    // 0x290a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290a94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290aa4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x290aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x290aa8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x290aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x290aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ab0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x290ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x290ab4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x290ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x290ab8: 0xc049c86  jal         func_127218
    ctx->pc = 0x290AB8u;
    SET_GPR_U32(ctx, 31, 0x290AC0u);
    ctx->pc = 0x290ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290AB8u;
            // 0x290abc: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290AC0u; }
        if (ctx->pc != 0x290AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290AC0u; }
        if (ctx->pc != 0x290AC0u) { return; }
    }
    ctx->pc = 0x290AC0u;
label_290ac0:
    // 0x290ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ac4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x290ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x290ac8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x290AC8u;
    SET_GPR_U32(ctx, 31, 0x290AD0u);
    ctx->pc = 0x290ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290AC8u;
            // 0x290acc: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290AD0u; }
        if (ctx->pc != 0x290AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290AD0u; }
        if (ctx->pc != 0x290AD0u) { return; }
    }
    ctx->pc = 0x290AD0u;
label_290ad0:
    // 0x290ad0: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x290ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x290ad4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x290ad8: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x290ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x290adc: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x290adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x290ae0: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x290ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x290ae4: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x290ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x290ae8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x290ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x290aec: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x290aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x290af0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x290af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x290af4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x290af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x290af8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x290af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x290afc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x290afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x290b00: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x290b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x290b04: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x290b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x290b08: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x290b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x290b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b14: 0x3e00008  jr          $ra
    ctx->pc = 0x290B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B14u;
            // 0x290b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290B1Cu;
}
