#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__18MessageTaskManagerFv
// Address: 0x28b630 - 0x28b730
void Step__18MessageTaskManagerFv_0x28b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__18MessageTaskManagerFv_0x28b630");
#endif

    switch (ctx->pc) {
        case 0x28b698u: goto label_28b698;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b71cu: goto label_28b71c;
        default: break;
    }

    ctx->pc = 0x28b630u;

    // 0x28b630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28b638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b644: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x28b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b648: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x28B648u;
    {
        const bool branch_taken_0x28b648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b648) {
            ctx->pc = 0x28B71Cu;
            goto label_28b71c;
        }
    }
    ctx->pc = 0x28B650u;
    // 0x28b650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b654: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28b658: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x28B658u;
    {
        const bool branch_taken_0x28b658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b658) {
            ctx->pc = 0x28B71Cu;
            goto label_28b71c;
        }
    }
    ctx->pc = 0x28B660u;
    // 0x28b660: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x28b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b664: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x28B664u;
    {
        const bool branch_taken_0x28b664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b664) {
            ctx->pc = 0x28B71Cu;
            goto label_28b71c;
        }
    }
    ctx->pc = 0x28B66Cu;
    // 0x28b66c: 0x84620088  lh          $v0, 0x88($v1)
    ctx->pc = 0x28b66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x28b670: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B670u;
    {
        const bool branch_taken_0x28b670 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28b670) {
            ctx->pc = 0x28B6A4u;
            goto label_28b6a4;
        }
    }
    ctx->pc = 0x28B678u;
    // 0x28b678: 0x8462008a  lh          $v0, 0x8A($v1)
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 138)));
    // 0x28b67c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b680: 0xac82014c  sw          $v0, 0x14C($a0)
    ctx->pc = 0x28b680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 2));
    // 0x28b684: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x28b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b688: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28b688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28b68c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b690: 0xc05638c  jal         func_158E30
    ctx->pc = 0x28B690u;
    SET_GPR_U32(ctx, 31, 0x28B698u);
    ctx->pc = 0x28B694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B690u;
            // 0x28b694: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B698u; }
        if (ctx->pc != 0x28B698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B698u; }
        if (ctx->pc != 0x28B698u) { return; }
    }
    ctx->pc = 0x28B698u;
label_28b698:
    // 0x28b698: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28b69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b6a0: 0xac43018c  sw          $v1, 0x18C($v0)
    ctx->pc = 0x28b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 3));
label_28b6a4:
    // 0x28b6a4: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x28b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b6a8: 0x84620088  lh          $v0, 0x88($v1)
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x28b6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b6b0: 0xa4620088  sh          $v0, 0x88($v1)
    ctx->pc = 0x28b6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b6b4: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x28b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b6b8: 0x84620086  lh          $v0, 0x86($v1)
    ctx->pc = 0x28b6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x28b6bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28b6c0: 0xa4620086  sh          $v0, 0x86($v1)
    ctx->pc = 0x28b6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b6c4: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x28b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b6c8: 0x84420086  lh          $v0, 0x86($v0)
    ctx->pc = 0x28b6c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x28b6cc: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28B6CCu;
    {
        const bool branch_taken_0x28b6cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28b6cc) {
            ctx->pc = 0x28B714u;
            goto label_28b714;
        }
    }
    ctx->pc = 0x28B6D4u;
    // 0x28b6d4: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x28b6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28b6d8: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x28B6D8u;
    SET_GPR_U32(ctx, 31, 0x28B6E0u);
    ctx->pc = 0x28B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6D8u;
            // 0x28b6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6E0u; }
        if (ctx->pc != 0x28B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6E0u; }
        if (ctx->pc != 0x28B6E0u) { return; }
    }
    ctx->pc = 0x28B6E0u;
label_28b6e0:
    // 0x28b6e0: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x28b6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x28b6e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b6e8: 0xae2217e4  sw          $v0, 0x17E4($s1)
    ctx->pc = 0x28b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
    // 0x28b6ec: 0xae2017e8  sw          $zero, 0x17E8($s1)
    ctx->pc = 0x28b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6120), GPR_U32(ctx, 0));
    // 0x28b6f0: 0xae20018c  sw          $zero, 0x18C($s1)
    ctx->pc = 0x28b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 0));
    // 0x28b6f4: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x28b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
    // 0x28b6f8: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x28b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x28b6fc: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x28b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x28b700: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x28b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b704: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28b704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28b708: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x28b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x28b70c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x28b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x28b710: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x28b710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_28b714:
    // 0x28b714: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x28B714u;
    SET_GPR_U32(ctx, 31, 0x28B71Cu);
    ctx->pc = 0x28B718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B714u;
            // 0x28b718: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B71Cu; }
        if (ctx->pc != 0x28B71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B71Cu; }
        if (ctx->pc != 0x28B71Cu) { return; }
    }
    ctx->pc = 0x28B71Cu;
label_28b71c:
    // 0x28b71c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28b71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b728: 0x3e00008  jr          $ra
    ctx->pc = 0x28B728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B728u;
            // 0x28b72c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B730u;
}
