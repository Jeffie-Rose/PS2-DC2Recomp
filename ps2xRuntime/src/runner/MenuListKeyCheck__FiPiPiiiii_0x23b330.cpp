#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuListKeyCheck__FiPiPiiiii
// Address: 0x23b330 - 0x23b42c
void MenuListKeyCheck__FiPiPiiiii_0x23b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuListKeyCheck__FiPiPiiiii_0x23b330");
#endif

    switch (ctx->pc) {
        case 0x23b408u: goto label_23b408;
        default: break;
    }

    ctx->pc = 0x23b330u;

    // 0x23b330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23b334: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x23b334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x23b338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23b33c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x23b340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b344: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x23b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b34c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b350: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x23b350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b354: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x23b354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x23b358: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23b358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23b35c: 0x24420c30  addiu       $v0, $v0, 0xC30
    ctx->pc = 0x23b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
    // 0x23b360: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x23b360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b364: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x23b364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x23b368: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b36c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23b370: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B370u;
    {
        const bool branch_taken_0x23b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b370) {
            ctx->pc = 0x23B384u;
            goto label_23b384;
        }
    }
    ctx->pc = 0x23B378u;
    // 0x23b378: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b37c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23b380: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b384:
    // 0x23b384: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b388: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23b38c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B38Cu;
    {
        const bool branch_taken_0x23b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B38Cu;
            // 0x23b390: 0x3c0301ed  lui         $v1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b38c) {
            ctx->pc = 0x23B3A0u;
            goto label_23b3a0;
        }
    }
    ctx->pc = 0x23B394u;
    // 0x23b394: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b39c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b3a0:
    // 0x23b3a0: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x23b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x23b3a4: 0x2463de20  addiu       $v1, $v1, -0x21E0
    ctx->pc = 0x23b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958624));
    // 0x23b3a8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x23b3ac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x23b3acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b3b0: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x23b3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x23b3b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23b3b8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x23b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23b3bc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x23b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x23b3c0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x23b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x23b3c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x23b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x23b3c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b3cc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B3CCu;
    {
        const bool branch_taken_0x23b3cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23b3cc) {
            ctx->pc = 0x23B3DCu;
            goto label_23b3dc;
        }
    }
    ctx->pc = 0x23B3D4u;
    // 0x23b3d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b3d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b3dc:
    // 0x23b3dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b3e0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x23b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23b3e4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x23b3e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23b3e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B3E8u;
    {
        const bool branch_taken_0x23b3e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3e8) {
            ctx->pc = 0x23B3F8u;
            goto label_23b3f8;
        }
    }
    ctx->pc = 0x23B3F0u;
    // 0x23b3f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b3f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b3f8:
    // 0x23b3f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b3fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b400: 0xc08ec58  jal         func_23B160
    ctx->pc = 0x23B400u;
    SET_GPR_U32(ctx, 31, 0x23B408u);
    ctx->pc = 0x23B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B400u;
            // 0x23b404: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B160u;
    if (runtime->hasFunction(0x23B160u)) {
        auto targetFn = runtime->lookupFunction(0x23B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B408u; }
        if (ctx->pc != 0x23B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckLine__FPiii_0x23b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B408u; }
        if (ctx->pc != 0x23B408u) { return; }
    }
    ctx->pc = 0x23B408u;
label_23b408:
    // 0x23b408: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23b408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b40c: 0x12030002  beq         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B40Cu;
    {
        const bool branch_taken_0x23b40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x23B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B40Cu;
            // 0x23b410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b40c) {
            ctx->pc = 0x23B418u;
            goto label_23b418;
        }
    }
    ctx->pc = 0x23B414u;
    // 0x23b414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b418:
    // 0x23b418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b424: 0x3e00008  jr          $ra
    ctx->pc = 0x23B424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B424u;
            // 0x23b428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B42Cu;
}
