#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBuggy__FP6CScene
// Address: 0x315350 - 0x3153ec
void InitBuggy__FP6CScene_0x315350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBuggy__FP6CScene_0x315350");
#endif

    switch (ctx->pc) {
        case 0x315350u: goto label_315350;
        case 0x315354u: goto label_315354;
        case 0x315358u: goto label_315358;
        case 0x31535cu: goto label_31535c;
        case 0x315360u: goto label_315360;
        case 0x315364u: goto label_315364;
        case 0x315368u: goto label_315368;
        case 0x31536cu: goto label_31536c;
        case 0x315370u: goto label_315370;
        case 0x315374u: goto label_315374;
        case 0x315378u: goto label_315378;
        case 0x31537cu: goto label_31537c;
        case 0x315380u: goto label_315380;
        case 0x315384u: goto label_315384;
        case 0x315388u: goto label_315388;
        case 0x31538cu: goto label_31538c;
        case 0x315390u: goto label_315390;
        case 0x315394u: goto label_315394;
        case 0x315398u: goto label_315398;
        case 0x31539cu: goto label_31539c;
        case 0x3153a0u: goto label_3153a0;
        case 0x3153a4u: goto label_3153a4;
        case 0x3153a8u: goto label_3153a8;
        case 0x3153acu: goto label_3153ac;
        case 0x3153b0u: goto label_3153b0;
        case 0x3153b4u: goto label_3153b4;
        case 0x3153b8u: goto label_3153b8;
        case 0x3153bcu: goto label_3153bc;
        case 0x3153c0u: goto label_3153c0;
        case 0x3153c4u: goto label_3153c4;
        case 0x3153c8u: goto label_3153c8;
        case 0x3153ccu: goto label_3153cc;
        case 0x3153d0u: goto label_3153d0;
        case 0x3153d4u: goto label_3153d4;
        case 0x3153d8u: goto label_3153d8;
        case 0x3153dcu: goto label_3153dc;
        case 0x3153e0u: goto label_3153e0;
        case 0x3153e4u: goto label_3153e4;
        case 0x3153e8u: goto label_3153e8;
        default: break;
    }

    ctx->pc = 0x315350u;

label_315350:
    // 0x315350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x315350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_315354:
    // 0x315354: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x315354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_315358:
    // 0x315358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31535c:
    // 0x31535c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31535cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315360:
    // 0x315360: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315364:
    // 0x315364: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x315364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_315368:
    // 0x315368: 0x3c02c489  lui         $v0, 0xC489
    ctx->pc = 0x315368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50313 << 16));
label_31536c:
    // 0x31536c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_315370:
    // 0x315370: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x315370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_315374:
    // 0x315374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315378:
    // 0x315378: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x315378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_31537c:
    // 0x31537c: 0x320f809  jalr        $t9
label_315380:
    if (ctx->pc == 0x315380u) {
        ctx->pc = 0x315384u;
        goto label_315384;
    }
    ctx->pc = 0x31537Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315384u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x315384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315384u; }
            if (ctx->pc != 0x315384u) { return; }
        }
        }
    }
    ctx->pc = 0x315384u;
label_315384:
    // 0x315384: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x315384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_315388:
    // 0x315388: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x315388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31538c:
    // 0x31538c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31538cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_315390:
    // 0x315390: 0xaf87a2f8  sw          $a3, -0x5D08($gp)
    ctx->pc = 0x315390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943480), GPR_U32(ctx, 7));
label_315394:
    // 0x315394: 0x24a527b8  addiu       $a1, $a1, 0x27B8
    ctx->pc = 0x315394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10168));
label_315398:
    // 0x315398: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x315398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_31539c:
    // 0x31539c: 0xaf80a2e4  sw          $zero, -0x5D1C($gp)
    ctx->pc = 0x31539cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 0));
label_3153a0:
    // 0x3153a0: 0xc0b8498  jal         func_2E1260
label_3153a4:
    if (ctx->pc == 0x3153A4u) {
        ctx->pc = 0x3153A4u;
            // 0x3153a4: 0xaf80a2e8  sw          $zero, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 0));
        ctx->pc = 0x3153A8u;
        goto label_3153a8;
    }
    ctx->pc = 0x3153A0u;
    SET_GPR_U32(ctx, 31, 0x3153A8u);
    ctx->pc = 0x3153A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3153A0u;
            // 0x3153a4: 0xaf80a2e8  sw          $zero, -0x5D18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153A8u; }
        if (ctx->pc != 0x3153A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153A8u; }
        if (ctx->pc != 0x3153A8u) { return; }
    }
    ctx->pc = 0x3153A8u;
label_3153a8:
    // 0x3153a8: 0xaf82a2a4  sw          $v0, -0x5D5C($gp)
    ctx->pc = 0x3153a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943396), GPR_U32(ctx, 2));
label_3153ac:
    // 0x3153ac: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3153acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3153b0:
    // 0x3153b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3153b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3153b4:
    // 0x3153b4: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x3153b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
label_3153b8:
    // 0x3153b8: 0xaf828644  sw          $v0, -0x79BC($gp)
    ctx->pc = 0x3153b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 2));
label_3153bc:
    // 0x3153bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3153c0:
    // 0x3153c0: 0xaf82a2ec  sw          $v0, -0x5D14($gp)
    ctx->pc = 0x3153c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943468), GPR_U32(ctx, 2));
label_3153c4:
    // 0x3153c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3153c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3153c8:
    // 0x3153c8: 0xc04bc8c  jal         func_12F230
label_3153cc:
    if (ctx->pc == 0x3153CCu) {
        ctx->pc = 0x3153CCu;
            // 0x3153cc: 0xaf82a2f0  sw          $v0, -0x5D10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), GPR_U32(ctx, 2));
        ctx->pc = 0x3153D0u;
        goto label_3153d0;
    }
    ctx->pc = 0x3153C8u;
    SET_GPR_U32(ctx, 31, 0x3153D0u);
    ctx->pc = 0x3153CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3153C8u;
            // 0x3153cc: 0xaf82a2f0  sw          $v0, -0x5D10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153D0u; }
        if (ctx->pc != 0x3153D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153D0u; }
        if (ctx->pc != 0x3153D0u) { return; }
    }
    ctx->pc = 0x3153D0u;
label_3153d0:
    // 0x3153d0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3153d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3153d4:
    // 0x3153d4: 0xaf80a300  sw          $zero, -0x5D00($gp)
    ctx->pc = 0x3153d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943488), GPR_U32(ctx, 0));
label_3153d8:
    // 0x3153d8: 0xaf83a2f4  sw          $v1, -0x5D0C($gp)
    ctx->pc = 0x3153d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 3));
label_3153dc:
    // 0x3153dc: 0xaf80a304  sw          $zero, -0x5CFC($gp)
    ctx->pc = 0x3153dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943492), GPR_U32(ctx, 0));
label_3153e0:
    // 0x3153e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3153e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3153e4:
    // 0x3153e4: 0x3e00008  jr          $ra
label_3153e8:
    if (ctx->pc == 0x3153E8u) {
        ctx->pc = 0x3153E8u;
            // 0x3153e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3153ECu;
        goto label_fallthrough_0x3153e4;
    }
    ctx->pc = 0x3153E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3153E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3153E4u;
            // 0x3153e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3153e4:
    ctx->pc = 0x3153ECu;
}
