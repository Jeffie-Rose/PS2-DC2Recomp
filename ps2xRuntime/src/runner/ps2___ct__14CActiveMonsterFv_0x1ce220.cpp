#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CActiveMonsterFv
// Address: 0x1ce220 - 0x1ce2d4
void ps2___ct__14CActiveMonsterFv_0x1ce220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CActiveMonsterFv_0x1ce220");
#endif

    switch (ctx->pc) {
        case 0x1ce220u: goto label_1ce220;
        case 0x1ce224u: goto label_1ce224;
        case 0x1ce228u: goto label_1ce228;
        case 0x1ce22cu: goto label_1ce22c;
        case 0x1ce230u: goto label_1ce230;
        case 0x1ce234u: goto label_1ce234;
        case 0x1ce238u: goto label_1ce238;
        case 0x1ce23cu: goto label_1ce23c;
        case 0x1ce240u: goto label_1ce240;
        case 0x1ce244u: goto label_1ce244;
        case 0x1ce248u: goto label_1ce248;
        case 0x1ce24cu: goto label_1ce24c;
        case 0x1ce250u: goto label_1ce250;
        case 0x1ce254u: goto label_1ce254;
        case 0x1ce258u: goto label_1ce258;
        case 0x1ce25cu: goto label_1ce25c;
        case 0x1ce260u: goto label_1ce260;
        case 0x1ce264u: goto label_1ce264;
        case 0x1ce268u: goto label_1ce268;
        case 0x1ce26cu: goto label_1ce26c;
        case 0x1ce270u: goto label_1ce270;
        case 0x1ce274u: goto label_1ce274;
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce27cu: goto label_1ce27c;
        case 0x1ce280u: goto label_1ce280;
        case 0x1ce284u: goto label_1ce284;
        case 0x1ce288u: goto label_1ce288;
        case 0x1ce28cu: goto label_1ce28c;
        case 0x1ce290u: goto label_1ce290;
        case 0x1ce294u: goto label_1ce294;
        case 0x1ce298u: goto label_1ce298;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2a0u: goto label_1ce2a0;
        case 0x1ce2a4u: goto label_1ce2a4;
        case 0x1ce2a8u: goto label_1ce2a8;
        case 0x1ce2acu: goto label_1ce2ac;
        case 0x1ce2b0u: goto label_1ce2b0;
        case 0x1ce2b4u: goto label_1ce2b4;
        case 0x1ce2b8u: goto label_1ce2b8;
        case 0x1ce2bcu: goto label_1ce2bc;
        case 0x1ce2c0u: goto label_1ce2c0;
        case 0x1ce2c4u: goto label_1ce2c4;
        case 0x1ce2c8u: goto label_1ce2c8;
        case 0x1ce2ccu: goto label_1ce2cc;
        case 0x1ce2d0u: goto label_1ce2d0;
        default: break;
    }

    ctx->pc = 0x1ce220u;

label_1ce220:
    // 0x1ce220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ce224:
    // 0x1ce224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ce228:
    // 0x1ce228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce22c:
    // 0x1ce22c: 0xc058768  jal         func_161DA0
label_1ce230:
    if (ctx->pc == 0x1CE230u) {
        ctx->pc = 0x1CE230u;
            // 0x1ce230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE234u;
        goto label_1ce234;
    }
    ctx->pc = 0x1CE22Cu;
    SET_GPR_U32(ctx, 31, 0x1CE234u);
    ctx->pc = 0x1CE230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE22Cu;
            // 0x1ce230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE234u; }
        if (ctx->pc != 0x1CE234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE234u; }
        if (ctx->pc != 0x1CE234u) { return; }
    }
    ctx->pc = 0x1CE234u;
label_1ce234:
    // 0x1ce234: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ce234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ce238:
    // 0x1ce238: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1ce238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1ce23c:
    // 0x1ce23c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ce23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ce240:
    // 0x1ce240: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce244:
    // 0x1ce244: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1ce244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1ce248:
    // 0x1ce248: 0x320f809  jalr        $t9
label_1ce24c:
    if (ctx->pc == 0x1CE24Cu) {
        ctx->pc = 0x1CE24Cu;
            // 0x1ce24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE250u;
        goto label_1ce250;
    }
    ctx->pc = 0x1CE248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CE250u);
        ctx->pc = 0x1CE24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE248u;
            // 0x1ce24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE250u; }
            if (ctx->pc != 0x1CE250u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE250u;
label_1ce250:
    // 0x1ce250: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ce254:
    // 0x1ce254: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1ce258:
    // 0x1ce258: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ce258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ce25c:
    // 0x1ce25c: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1ce25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_1ce260:
    // 0x1ce260: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1ce260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1ce264:
    // 0x1ce264: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1ce264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_1ce268:
    // 0x1ce268: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce26c:
    // 0x1ce26c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1ce26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1ce270:
    // 0x1ce270: 0x320f809  jalr        $t9
label_1ce274:
    if (ctx->pc == 0x1CE274u) {
        ctx->pc = 0x1CE274u;
            // 0x1ce274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CE278u;
        goto label_1ce278;
    }
    ctx->pc = 0x1CE270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CE278u);
        ctx->pc = 0x1CE274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE270u;
            // 0x1ce274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE278u; }
            if (ctx->pc != 0x1CE278u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE278u;
label_1ce278:
    // 0x1ce278: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ce27c:
    // 0x1ce27c: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x1ce27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_1ce280:
    // 0x1ce280: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_1ce284:
    // 0x1ce284: 0xc061b34  jal         func_186CD0
label_1ce288:
    if (ctx->pc == 0x1CE288u) {
        ctx->pc = 0x1CE288u;
            // 0x1ce288: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CE28Cu;
        goto label_1ce28c;
    }
    ctx->pc = 0x1CE284u;
    SET_GPR_U32(ctx, 31, 0x1CE28Cu);
    ctx->pc = 0x1CE288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE284u;
            // 0x1ce288: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE28Cu; }
        if (ctx->pc != 0x1CE28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE28Cu; }
        if (ctx->pc != 0x1CE28Cu) { return; }
    }
    ctx->pc = 0x1CE28Cu;
label_1ce28c:
    // 0x1ce28c: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_1ce290:
    // 0x1ce290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce294:
    // 0x1ce294: 0xc049c86  jal         func_127218
label_1ce298:
    if (ctx->pc == 0x1CE298u) {
        ctx->pc = 0x1CE298u;
            // 0x1ce298: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1CE29Cu;
        goto label_1ce29c;
    }
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x1CE298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE294u;
            // 0x1ce298: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE29Cu; }
        if (ctx->pc != 0x1CE29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE29Cu; }
        if (ctx->pc != 0x1CE29Cu) { return; }
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ce29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ce2a0:
    // 0x1ce2a0: 0x26041040  addiu       $a0, $s0, 0x1040
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
label_1ce2a4:
    // 0x1ce2a4: 0x24425bd0  addiu       $v0, $v0, 0x5BD0
    ctx->pc = 0x1ce2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23504));
label_1ce2a8:
    // 0x1ce2a8: 0xc061b34  jal         func_186CD0
label_1ce2ac:
    if (ctx->pc == 0x1CE2ACu) {
        ctx->pc = 0x1CE2ACu;
            // 0x1ce2ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CE2B0u;
        goto label_1ce2b0;
    }
    ctx->pc = 0x1CE2A8u;
    SET_GPR_U32(ctx, 31, 0x1CE2B0u);
    ctx->pc = 0x1CE2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2A8u;
            // 0x1ce2ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B0u; }
        if (ctx->pc != 0x1CE2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B0u; }
        if (ctx->pc != 0x1CE2B0u) { return; }
    }
    ctx->pc = 0x1CE2B0u;
label_1ce2b0:
    // 0x1ce2b0: 0x26041360  addiu       $a0, $s0, 0x1360
    ctx->pc = 0x1ce2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4960));
label_1ce2b4:
    // 0x1ce2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2b8:
    // 0x1ce2b8: 0xc049c86  jal         func_127218
label_1ce2bc:
    if (ctx->pc == 0x1CE2BCu) {
        ctx->pc = 0x1CE2BCu;
            // 0x1ce2bc: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1CE2C0u;
        goto label_1ce2c0;
    }
    ctx->pc = 0x1CE2B8u;
    SET_GPR_U32(ctx, 31, 0x1CE2C0u);
    ctx->pc = 0x1CE2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2B8u;
            // 0x1ce2bc: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2C0u; }
        if (ctx->pc != 0x1CE2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2C0u; }
        if (ctx->pc != 0x1CE2C0u) { return; }
    }
    ctx->pc = 0x1CE2C0u;
label_1ce2c0:
    // 0x1ce2c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ce2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2c4:
    // 0x1ce2c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce2c8:
    // 0x1ce2c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce2cc:
    // 0x1ce2cc: 0x3e00008  jr          $ra
label_1ce2d0:
    if (ctx->pc == 0x1CE2D0u) {
        ctx->pc = 0x1CE2D0u;
            // 0x1ce2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CE2D4u;
        goto label_fallthrough_0x1ce2cc;
    }
    ctx->pc = 0x1CE2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2CCu;
            // 0x1ce2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ce2cc:
    ctx->pc = 0x1CE2D4u;
}
