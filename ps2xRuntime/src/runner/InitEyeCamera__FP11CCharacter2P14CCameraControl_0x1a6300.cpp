#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEyeCamera__FP11CCharacter2P14CCameraControl
// Address: 0x1a6300 - 0x1a635c
void InitEyeCamera__FP11CCharacter2P14CCameraControl_0x1a6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEyeCamera__FP11CCharacter2P14CCameraControl_0x1a6300");
#endif

    switch (ctx->pc) {
        case 0x1a6300u: goto label_1a6300;
        case 0x1a6304u: goto label_1a6304;
        case 0x1a6308u: goto label_1a6308;
        case 0x1a630cu: goto label_1a630c;
        case 0x1a6310u: goto label_1a6310;
        case 0x1a6314u: goto label_1a6314;
        case 0x1a6318u: goto label_1a6318;
        case 0x1a631cu: goto label_1a631c;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a6324u: goto label_1a6324;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a632cu: goto label_1a632c;
        case 0x1a6330u: goto label_1a6330;
        case 0x1a6334u: goto label_1a6334;
        case 0x1a6338u: goto label_1a6338;
        case 0x1a633cu: goto label_1a633c;
        case 0x1a6340u: goto label_1a6340;
        case 0x1a6344u: goto label_1a6344;
        case 0x1a6348u: goto label_1a6348;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6350u: goto label_1a6350;
        case 0x1a6354u: goto label_1a6354;
        case 0x1a6358u: goto label_1a6358;
        default: break;
    }

    ctx->pc = 0x1a6300u;

label_1a6300:
    // 0x1a6300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a6304:
    // 0x1a6304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a6308:
    // 0x1a6308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a630c:
    // 0x1a630c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6310:
    // 0x1a6310: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6314:
    // 0x1a6314: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a6318:
    // 0x1a6318: 0x320f809  jalr        $t9
label_1a631c:
    if (ctx->pc == 0x1A631Cu) {
        ctx->pc = 0x1A631Cu;
            // 0x1a631c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A6320u;
        goto label_1a6320;
    }
    ctx->pc = 0x1A6318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6320u);
        ctx->pc = 0x1A631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6318u;
            // 0x1a631c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6320u; }
            if (ctx->pc != 0x1A6320u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6320u;
label_1a6320:
    // 0x1a6320: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a6320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6324:
    // 0x1a6324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6328:
    // 0x1a6328: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1a632c:
    // 0x1a632c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a632cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6330:
    // 0x1a6330: 0xaf828bd4  sw          $v0, -0x742C($gp)
    ctx->pc = 0x1a6330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 2));
label_1a6334:
    // 0x1a6334: 0x24a5b2e0  addiu       $a1, $a1, -0x4D20
    ctx->pc = 0x1a6334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947552));
label_1a6338:
    // 0x1a6338: 0xaf808bc8  sw          $zero, -0x7438($gp)
    ctx->pc = 0x1a6338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U32(ctx, 0));
label_1a633c:
    // 0x1a633c: 0xaf808bcc  sw          $zero, -0x7434($gp)
    ctx->pc = 0x1a633cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937548), GPR_U32(ctx, 0));
label_1a6340:
    // 0x1a6340: 0xaf808bd0  sw          $zero, -0x7430($gp)
    ctx->pc = 0x1a6340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937552), GPR_U32(ctx, 0));
label_1a6344:
    // 0x1a6344: 0xc04c574  jal         func_1315D0
label_1a6348:
    if (ctx->pc == 0x1A6348u) {
        ctx->pc = 0x1A6348u;
            // 0x1a6348: 0xe7808bc4  swc1        $f0, -0x743C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
        ctx->pc = 0x1A634Cu;
        goto label_1a634c;
    }
    ctx->pc = 0x1A6344u;
    SET_GPR_U32(ctx, 31, 0x1A634Cu);
    ctx->pc = 0x1A6348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6344u;
            // 0x1a6348: 0xe7808bc4  swc1        $f0, -0x743C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A634Cu; }
        if (ctx->pc != 0x1A634Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A634Cu; }
        if (ctx->pc != 0x1A634Cu) { return; }
    }
    ctx->pc = 0x1A634Cu;
label_1a634c:
    // 0x1a634c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6350:
    // 0x1a6350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6354:
    // 0x1a6354: 0x3e00008  jr          $ra
label_1a6358:
    if (ctx->pc == 0x1A6358u) {
        ctx->pc = 0x1A6358u;
            // 0x1a6358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A635Cu;
        goto label_fallthrough_0x1a6354;
    }
    ctx->pc = 0x1A6354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6354u;
            // 0x1a6358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a6354:
    ctx->pc = 0x1A635Cu;
}
