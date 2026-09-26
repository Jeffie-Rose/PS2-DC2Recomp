#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FindMostRecentException__FP12ThrowContextP13ExceptionInfo
// Address: 0x1012b0 - 0x101424
void FindMostRecentException__FP12ThrowContextP13ExceptionInfo_0x1012b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindMostRecentException__FP12ThrowContextP13ExceptionInfo_0x1012b0");
#endif

    switch (ctx->pc) {
        case 0x101350u: goto label_101350;
        case 0x101390u: goto label_101390;
        case 0x1013c0u: goto label_1013c0;
        case 0x1013d0u: goto label_1013d0;
        case 0x1013e8u: goto label_1013e8;
        default: break;
    }

    ctx->pc = 0x1012b0u;

    // 0x1012b0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x1012b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x1012b4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1012b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1012b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1012bc: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1012c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1012c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1012c4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1012c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1012c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1012cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1012ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1012d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1012d4: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1012d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1012d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1012d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1012dc: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x1012dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1012e0: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1012e4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1012e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1012e8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1012ec: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1012ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1012f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1012f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1012f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1012f8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1012fc: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1012fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x101300: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x101300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x101304: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x101304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x101308: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x101308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10130c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x10130cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x101310: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101314: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x101314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x101318: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10131c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x10131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x101320: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x101320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x101324: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x101324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x101328: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10132c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x10132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x101330: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x101330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x101334: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x101334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x101338: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10133c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x10133cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x101340: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x101344: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x101344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x101348: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x10134c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x10134cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_101350:
    // 0x101350: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x101350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101354: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x101354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x101358: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x101358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x10135c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x10135cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x101360: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x101364: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x101364u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x101368: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x101368u;
    {
        const bool branch_taken_0x101368 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x10136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101368u;
            // 0x10136c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101368) {
            ctx->pc = 0x101350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101350;
        }
    }
    ctx->pc = 0x101370u;
    // 0x101370: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101374: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101374u;
    {
        const bool branch_taken_0x101374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101374) {
            ctx->pc = 0x101388u;
            goto label_101388;
        }
    }
    ctx->pc = 0x10137Cu;
    // 0x10137c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10137cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101380u;
    {
        const bool branch_taken_0x101380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101380u;
            // 0x101384: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101380) {
            ctx->pc = 0x10138Cu;
            goto label_10138c;
        }
    }
    ctx->pc = 0x101388u;
label_101388:
    // 0x101388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10138c:
    // 0x10138c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101390:
    // 0x101390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x101390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x101394: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x101394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x101398: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x101398u;
    {
        const bool branch_taken_0x101398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101398u;
            // 0x10139c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101398) {
            ctx->pc = 0x1013B8u;
            goto label_1013b8;
        }
    }
    ctx->pc = 0x1013A0u;
    // 0x1013a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1013a4: 0x2463eef0  addiu       $v1, $v1, -0x1110
    ctx->pc = 0x1013a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962928));
    // 0x1013a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1013a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1013ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1013acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1013b0: 0x400008  jr          $v0
    ctx->pc = 0x1013B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1013B8u: goto label_1013b8;
            case 0x1013C8u: goto label_1013c8;
            case 0x1013D8u: goto label_1013d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1013B8u;
label_1013b8:
    // 0x1013b8: 0xc040248  jal         func_100920
    ctx->pc = 0x1013B8u;
    SET_GPR_U32(ctx, 31, 0x1013C0u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013C0u; }
        if (ctx->pc != 0x1013C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013C0u; }
        if (ctx->pc != 0x1013C0u) { return; }
    }
    ctx->pc = 0x1013C0u;
label_1013c0:
    // 0x1013c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1013C0u;
    {
        const bool branch_taken_0x1013c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1013c0) {
            ctx->pc = 0x1013D8u;
            goto label_1013d8;
        }
    }
    ctx->pc = 0x1013C8u;
label_1013c8:
    // 0x1013c8: 0xc040728  jal         func_101CA0
    ctx->pc = 0x1013C8u;
    SET_GPR_U32(ctx, 31, 0x1013D0u);
    ctx->pc = 0x1013CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1013C8u;
            // 0x1013cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101CA0u;
    if (runtime->hasFunction(0x101CA0u)) {
        auto targetFn = runtime->lookupFunction(0x101CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013D0u; }
        if (ctx->pc != 0x1013D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextAction__FP14ActionIterator_0x101ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013D0u; }
        if (ctx->pc != 0x1013D0u) { return; }
    }
    ctx->pc = 0x1013D0u;
label_1013d0:
    // 0x1013d0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1013D0u;
    {
        const bool branch_taken_0x1013d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1013D0u;
            // 0x1013d4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013d0) {
            ctx->pc = 0x101390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101390;
        }
    }
    ctx->pc = 0x1013D8u;
label_1013d8:
    // 0x1013d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1013dc: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x1013dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    // 0x1013e0: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x1013E0u;
    SET_GPR_U32(ctx, 31, 0x1013E8u);
    ctx->pc = 0x1013E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1013E0u;
            // 0x1013e4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013E8u; }
        if (ctx->pc != 0x1013E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013E8u; }
        if (ctx->pc != 0x1013E8u) { return; }
    }
    ctx->pc = 0x1013E8u;
label_1013e8:
    // 0x1013e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1013e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1013ec: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x1013f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1013f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1013f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1013f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1013fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101400: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x101400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x101404: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x101404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x101408: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x101408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x10140c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10140cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10141c: 0x3e00008  jr          $ra
    ctx->pc = 0x10141Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10141Cu;
            // 0x101420: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101424u;
}
