#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CEventSpriteFv
// Address: 0x290320 - 0x290448
void Step__12CEventSpriteFv_0x290320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CEventSpriteFv_0x290320");
#endif

    switch (ctx->pc) {
        case 0x2903b0u: goto label_2903b0;
        case 0x2903ccu: goto label_2903cc;
        case 0x290428u: goto label_290428;
        default: break;
    }

    ctx->pc = 0x290320u;

    // 0x290320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29032c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290334: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x290334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x290338: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x290338u;
    {
        const bool branch_taken_0x290338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x290338) {
            ctx->pc = 0x2903E0u;
            goto label_2903e0;
        }
    }
    ctx->pc = 0x290340u;
    // 0x290340: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290340u;
    {
        const bool branch_taken_0x290340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x290340) {
            ctx->pc = 0x290350u;
            goto label_290350;
        }
    }
    ctx->pc = 0x290348u;
    // 0x290348: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x290348u;
    {
        const bool branch_taken_0x290348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290348u;
            // 0x29034c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290348) {
            ctx->pc = 0x29043Cu;
            goto label_29043c;
        }
    }
    ctx->pc = 0x290350u;
label_290350:
    // 0x290350: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x290350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x290354: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x290354u;
    {
        const bool branch_taken_0x290354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290354) {
            ctx->pc = 0x29036Cu;
            goto label_29036c;
        }
    }
    ctx->pc = 0x29035Cu;
    // 0x29035c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x29035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x290360: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x290360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x290364: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x290364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x290368: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x290368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_29036c:
    // 0x29036c: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x29036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x290370: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x290370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x290374: 0x1485000a  bne         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x290374u;
    {
        const bool branch_taken_0x290374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x290374) {
            ctx->pc = 0x2903A0u;
            goto label_2903a0;
        }
    }
    ctx->pc = 0x29037Cu;
    // 0x29037c: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x29037cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x290380: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x290380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x290384: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x290384u;
    {
        const bool branch_taken_0x290384 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x290388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290384u;
            // 0x290388: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290384) {
            ctx->pc = 0x2903A0u;
            goto label_2903a0;
        }
    }
    ctx->pc = 0x29038Cu;
    // 0x29038c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x29038cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x290390: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x290390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x290394: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x290394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x290398: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x290398u;
    {
        const bool branch_taken_0x290398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290398u;
            // 0x29039c: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290398) {
            ctx->pc = 0x290438u;
            goto label_290438;
        }
    }
    ctx->pc = 0x2903A0u;
label_2903a0:
    // 0x2903a0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2903a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2903a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2903a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2903a8: 0xc054400  jal         func_151000
    ctx->pc = 0x2903A8u;
    SET_GPR_U32(ctx, 31, 0x2903B0u);
    ctx->pc = 0x2903ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2903A8u;
            // 0x2903ac: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151000u;
    if (runtime->hasFunction(0x151000u)) {
        auto targetFn = runtime->lookupFunction(0x151000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2903B0u; }
        if (ctx->pc != 0x2903B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolationI__Fiiii_0x151000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2903B0u; }
        if (ctx->pc != 0x2903B0u) { return; }
    }
    ctx->pc = 0x2903B0u;
label_2903b0:
    // 0x2903b0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2903b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2903b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2903b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2903b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2903b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2903bc: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2903bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2903c0: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2903c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2903c4: 0xc054400  jal         func_151000
    ctx->pc = 0x2903C4u;
    SET_GPR_U32(ctx, 31, 0x2903CCu);
    ctx->pc = 0x2903C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2903C4u;
            // 0x2903c8: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151000u;
    if (runtime->hasFunction(0x151000u)) {
        auto targetFn = runtime->lookupFunction(0x151000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2903CCu; }
        if (ctx->pc != 0x2903CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolationI__Fiiii_0x151000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2903CCu; }
        if (ctx->pc != 0x2903CCu) { return; }
    }
    ctx->pc = 0x2903CCu;
label_2903cc:
    // 0x2903cc: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2903ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x2903d0: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2903d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2903d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2903d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2903d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2903D8u;
    {
        const bool branch_taken_0x2903d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903D8u;
            // 0x2903dc: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903d8) {
            ctx->pc = 0x290438u;
            goto label_290438;
        }
    }
    ctx->pc = 0x2903E0u;
label_2903e0:
    // 0x2903e0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2903e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2903e4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2903E4u;
    {
        const bool branch_taken_0x2903e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2903e4) {
            ctx->pc = 0x2903F4u;
            goto label_2903f4;
        }
    }
    ctx->pc = 0x2903ECu;
    // 0x2903ec: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2903ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2903f0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2903f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_2903f4:
    // 0x2903f4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2903f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2903f8: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x2903f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2903fc: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2903FCu;
    {
        const bool branch_taken_0x2903fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x290400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903FCu;
            // 0x290400: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903fc) {
            ctx->pc = 0x290418u;
            goto label_290418;
        }
    }
    ctx->pc = 0x290404u;
    // 0x290404: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x290404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x290408: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x290408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x29040c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x29040cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x290410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x290410u;
    {
        const bool branch_taken_0x290410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290410u;
            // 0x290414: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290410) {
            ctx->pc = 0x290438u;
            goto label_290438;
        }
    }
    ctx->pc = 0x290418u;
label_290418:
    // 0x290418: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x290418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29041c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290420: 0xc054400  jal         func_151000
    ctx->pc = 0x290420u;
    SET_GPR_U32(ctx, 31, 0x290428u);
    ctx->pc = 0x290424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290420u;
            // 0x290424: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151000u;
    if (runtime->hasFunction(0x151000u)) {
        auto targetFn = runtime->lookupFunction(0x151000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290428u; }
        if (ctx->pc != 0x290428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolationI__Fiiii_0x151000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290428u; }
        if (ctx->pc != 0x290428u) { return; }
    }
    ctx->pc = 0x290428u;
label_290428:
    // 0x290428: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x290428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x29042c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x29042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x290430: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290434: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x290434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_290438:
    // 0x290438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29043c:
    // 0x29043c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29043cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290440: 0x3e00008  jr          $ra
    ctx->pc = 0x290440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290440u;
            // 0x290444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290448u;
}
