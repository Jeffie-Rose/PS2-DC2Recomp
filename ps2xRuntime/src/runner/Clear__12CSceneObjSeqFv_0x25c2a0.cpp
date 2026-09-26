#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__12CSceneObjSeqFv
// Address: 0x25c2a0 - 0x25c35c
void Clear__12CSceneObjSeqFv_0x25c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__12CSceneObjSeqFv_0x25c2a0");
#endif

    switch (ctx->pc) {
        case 0x25c2c0u: goto label_25c2c0;
        case 0x25c2c8u: goto label_25c2c8;
        case 0x25c2d0u: goto label_25c2d0;
        case 0x25c2d8u: goto label_25c2d8;
        case 0x25c2e0u: goto label_25c2e0;
        case 0x25c2ecu: goto label_25c2ec;
        case 0x25c2f4u: goto label_25c2f4;
        default: break;
    }

    ctx->pc = 0x25c2a0u;

    // 0x25c2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c2a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c2a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c2b4: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x25c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x25c2b8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2B8u;
    SET_GPR_U32(ctx, 31, 0x25C2C0u);
    ctx->pc = 0x25C2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2B8u;
            // 0x25c2bc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2C0u; }
        if (ctx->pc != 0x25C2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2C0u; }
        if (ctx->pc != 0x25C2C0u) { return; }
    }
    ctx->pc = 0x25C2C0u;
label_25c2c0:
    // 0x25c2c0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2C0u;
    SET_GPR_U32(ctx, 31, 0x25C2C8u);
    ctx->pc = 0x25C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2C0u;
            // 0x25c2c4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2C8u; }
        if (ctx->pc != 0x25C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2C8u; }
        if (ctx->pc != 0x25C2C8u) { return; }
    }
    ctx->pc = 0x25C2C8u;
label_25c2c8:
    // 0x25c2c8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2C8u;
    SET_GPR_U32(ctx, 31, 0x25C2D0u);
    ctx->pc = 0x25C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2C8u;
            // 0x25c2cc: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2D0u; }
        if (ctx->pc != 0x25C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2D0u; }
        if (ctx->pc != 0x25C2D0u) { return; }
    }
    ctx->pc = 0x25C2D0u;
label_25c2d0:
    // 0x25c2d0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2D0u;
    SET_GPR_U32(ctx, 31, 0x25C2D8u);
    ctx->pc = 0x25C2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2D0u;
            // 0x25c2d4: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2D8u; }
        if (ctx->pc != 0x25C2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2D8u; }
        if (ctx->pc != 0x25C2D8u) { return; }
    }
    ctx->pc = 0x25C2D8u;
label_25c2d8:
    // 0x25c2d8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2D8u;
    SET_GPR_U32(ctx, 31, 0x25C2E0u);
    ctx->pc = 0x25C2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2D8u;
            // 0x25c2dc: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2E0u; }
        if (ctx->pc != 0x25C2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2E0u; }
        if (ctx->pc != 0x25C2E0u) { return; }
    }
    ctx->pc = 0x25C2E0u;
label_25c2e0:
    // 0x25c2e0: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x25c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25c2e4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2E4u;
    SET_GPR_U32(ctx, 31, 0x25C2ECu);
    ctx->pc = 0x25C2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2E4u;
            // 0x25c2e8: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2ECu; }
        if (ctx->pc != 0x25C2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2ECu; }
        if (ctx->pc != 0x25C2ECu) { return; }
    }
    ctx->pc = 0x25C2ECu;
label_25c2ec:
    // 0x25c2ec: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25C2ECu;
    SET_GPR_U32(ctx, 31, 0x25C2F4u);
    ctx->pc = 0x25C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2ECu;
            // 0x25c2f0: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2F4u; }
        if (ctx->pc != 0x25C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2F4u; }
        if (ctx->pc != 0x25C2F4u) { return; }
    }
    ctx->pc = 0x25C2F4u;
label_25c2f4:
    // 0x25c2f4: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x25c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x25c2f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x25c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x25c2fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x25c300: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x25c300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x25c304: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x25c304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x25c308: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25c308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x25c30c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x25c310: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x25c310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x25c314: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25c314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25c318: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x25c318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x25c31c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x25c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x25c320: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x25c320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x25c324: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x25c324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x25c328: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x25c328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x25c32c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x25c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x25c330: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25c330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25c334: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x25c334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x25c338: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x25c338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x25c33c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x25c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x25c340: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x25c340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x25c344: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x25c344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x25c348: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x25c348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x25c34c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c354: 0x3e00008  jr          $ra
    ctx->pc = 0x25C354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C354u;
            // 0x25c358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C35Cu;
}
