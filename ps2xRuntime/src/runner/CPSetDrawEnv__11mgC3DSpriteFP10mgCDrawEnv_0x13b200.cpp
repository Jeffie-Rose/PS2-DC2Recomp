#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv
// Address: 0x13b200 - 0x13b2ec
void CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200");
#endif

    switch (ctx->pc) {
        case 0x13b254u: goto label_13b254;
        case 0x13b268u: goto label_13b268;
        default: break;
    }

    ctx->pc = 0x13b200u;

    // 0x13b200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b210: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b214: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13B214u;
    {
        const bool branch_taken_0x13b214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B214u;
            // 0x13b218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b214) {
            ctx->pc = 0x13B2D8u;
            goto label_13b2d8;
        }
    }
    ctx->pc = 0x13B21Cu;
    // 0x13b21c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x13b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x13b220: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13b220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13b224: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x13b224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13b228: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13b22c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13b230: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13b230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13b234: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13b234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13b238: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13b238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13b23c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x13b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x13b240: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x13b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x13b244: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13b248: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x13b248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x13b24c: 0xc04e220  jal         func_138880
    ctx->pc = 0x13B24Cu;
    SET_GPR_U32(ctx, 31, 0x13B254u);
    ctx->pc = 0x13B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B24Cu;
            // 0x13b250: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B254u; }
        if (ctx->pc != 0x13B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B254u; }
        if (ctx->pc != 0x13B254u) { return; }
    }
    ctx->pc = 0x13B254u;
label_13b254:
    // 0x13b254: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x13b254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x13b258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b25c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13b260: 0xc04e278  jal         func_1389E0
    ctx->pc = 0x13B260u;
    SET_GPR_U32(ctx, 31, 0x13B268u);
    ctx->pc = 0x13B264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B260u;
            // 0x13b264: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1389E0u;
    if (runtime->hasFunction(0x1389E0u)) {
        auto targetFn = runtime->lookupFunction(0x1389E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B268u; }
        if (ctx->pc != 0x13B268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlphaMacroID__10mgCDrawEnvFv_0x1389e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B268u; }
        if (ctx->pc != 0x13B268u) { return; }
    }
    ctx->pc = 0x13B268u;
label_13b268:
    // 0x13b268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b26c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B26Cu;
    {
        const bool branch_taken_0x13b26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B26Cu;
            // 0x13b270: 0x8e28002c  lw          $t0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b26c) {
            ctx->pc = 0x13B280u;
            goto label_13b280;
        }
    }
    ctx->pc = 0x13B274u;
    // 0x13b274: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13b278: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B278u;
    {
        const bool branch_taken_0x13b278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13b278) {
            ctx->pc = 0x13B2D8u;
            goto label_13b2d8;
        }
    }
    ctx->pc = 0x13B280u;
label_13b280:
    // 0x13b280: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x13b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x13b284: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x13b284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x13b288: 0x34660002  ori         $a2, $v1, 0x2
    ctx->pc = 0x13b288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13b28c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x13b28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13b290: 0x34e30002  ori         $v1, $a3, 0x2
    ctx->pc = 0x13b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x13b294: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x13b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13b298: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x13b298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x13b29c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x13b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x13b2a0: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x13b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x13b2a4: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x13b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x13b2a8: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x13b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x13b2ac: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x13b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x13b2b0: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x13b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x13b2b4: 0xad040018  sw          $a0, 0x18($t0)
    ctx->pc = 0x13b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
    // 0x13b2b8: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x13b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x13b2bc: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x13b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x13b2c0: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x13b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x13b2c4: 0xad030028  sw          $v1, 0x28($t0)
    ctx->pc = 0x13b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
    // 0x13b2c8: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x13b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x13b2cc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x13b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x13b2d0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x13b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13b2d4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x13b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_13b2d8:
    // 0x13b2d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b2dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b2e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B2E4u;
            // 0x13b2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B2ECu;
}
