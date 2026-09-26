#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotion__10CEohMotherFiPcif
// Address: 0x25e3a0 - 0x25e47c
void SetMotion__10CEohMotherFiPcif_0x25e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotion__10CEohMotherFiPcif_0x25e3a0");
#endif

    switch (ctx->pc) {
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        default: break;
    }

    ctx->pc = 0x25e3a0u;

label_25e3a0:
    // 0x25e3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25e3a4:
    // 0x25e3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25e3a8:
    // 0x25e3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25e3ac:
    // 0x25e3ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25e3acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25e3b0:
    // 0x25e3b0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e3b4:
    if (ctx->pc == 0x25E3B4u) {
        ctx->pc = 0x25E3B4u;
            // 0x25e3b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x25E3B8u;
        goto label_25e3b8;
    }
    ctx->pc = 0x25E3B0u;
    {
        const bool branch_taken_0x25e3b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3B0u;
            // 0x25e3b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3b0) {
            ctx->pc = 0x25E3C4u;
            goto label_25e3c4;
        }
    }
    ctx->pc = 0x25E3B8u;
label_25e3b8:
    // 0x25e3b8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e3bc:
    // 0x25e3bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e3c0:
    if (ctx->pc == 0x25E3C0u) {
        ctx->pc = 0x25E3C0u;
            // 0x25e3c0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E3C4u;
        goto label_25e3c4;
    }
    ctx->pc = 0x25E3BCu;
    {
        const bool branch_taken_0x25e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3BCu;
            // 0x25e3c0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3bc) {
            ctx->pc = 0x25E3CCu;
            goto label_25e3cc;
        }
    }
    ctx->pc = 0x25E3C4u;
label_25e3c4:
    // 0x25e3c4: 0x10000028  b           . + 4 + (0x28 << 2)
label_25e3c8:
    if (ctx->pc == 0x25E3C8u) {
        ctx->pc = 0x25E3C8u;
            // 0x25e3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E3CCu;
        goto label_25e3cc;
    }
    ctx->pc = 0x25E3C4u;
    {
        const bool branch_taken_0x25e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3C4u;
            // 0x25e3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3c4) {
            ctx->pc = 0x25E468u;
            goto label_25e468;
        }
    }
    ctx->pc = 0x25E3CCu;
label_25e3cc:
    // 0x25e3cc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25e3d0:
    // 0x25e3d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e3d4:
    // 0x25e3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e3d8:
    if (ctx->pc == 0x25E3D8u) {
        ctx->pc = 0x25E3DCu;
        goto label_25e3dc;
    }
    ctx->pc = 0x25E3D4u;
    {
        const bool branch_taken_0x25e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e3d4) {
            ctx->pc = 0x25E3E4u;
            goto label_25e3e4;
        }
    }
    ctx->pc = 0x25E3DCu;
label_25e3dc:
    // 0x25e3dc: 0x10000022  b           . + 4 + (0x22 << 2)
label_25e3e0:
    if (ctx->pc == 0x25E3E0u) {
        ctx->pc = 0x25E3E0u;
            // 0x25e3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E3E4u;
        goto label_25e3e4;
    }
    ctx->pc = 0x25E3DCu;
    {
        const bool branch_taken_0x25e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3DCu;
            // 0x25e3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3dc) {
            ctx->pc = 0x25E468u;
            goto label_25e468;
        }
    }
    ctx->pc = 0x25E3E4u;
label_25e3e4:
    // 0x25e3e4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25e3e8:
    // 0x25e3e8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e3ec:
    if (ctx->pc == 0x25E3ECu) {
        ctx->pc = 0x25E3ECu;
            // 0x25e3ec: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x25E3F0u;
        goto label_25e3f0;
    }
    ctx->pc = 0x25E3E8u;
    {
        const bool branch_taken_0x25e3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3E8u;
            // 0x25e3ec: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3e8) {
            ctx->pc = 0x25E3F8u;
            goto label_25e3f8;
        }
    }
    ctx->pc = 0x25E3F0u;
label_25e3f0:
    // 0x25e3f0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_25e3f4:
    if (ctx->pc == 0x25E3F4u) {
        ctx->pc = 0x25E3F4u;
            // 0x25e3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E3F8u;
        goto label_25e3f8;
    }
    ctx->pc = 0x25E3F0u;
    {
        const bool branch_taken_0x25e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E3F0u;
            // 0x25e3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3f0) {
            ctx->pc = 0x25E468u;
            goto label_25e468;
        }
    }
    ctx->pc = 0x25E3F8u;
label_25e3f8:
    // 0x25e3f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e3fc:
    // 0x25e3fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25e3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25e400:
    // 0x25e400: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x25e400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_25e404:
    // 0x25e404: 0x320f809  jalr        $t9
label_25e408:
    if (ctx->pc == 0x25E408u) {
        ctx->pc = 0x25E408u;
            // 0x25e408: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E40Cu;
        goto label_25e40c;
    }
    ctx->pc = 0x25E404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E40Cu);
        ctx->pc = 0x25E408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E404u;
            // 0x25e408: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E40Cu; }
            if (ctx->pc != 0x25E40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E40Cu;
label_25e40c:
    // 0x25e40c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_25e410:
    // 0x25e410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25e414:
    // 0x25e414: 0x0  nop
    ctx->pc = 0x25e414u;
    // NOP
label_25e418:
    // 0x25e418: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x25e418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e41c:
    // 0x25e41c: 0x0  nop
    ctx->pc = 0x25e41cu;
    // NOP
label_25e420:
    // 0x25e420: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_25e424:
    if (ctx->pc == 0x25E424u) {
        ctx->pc = 0x25E424u;
            // 0x25e424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E428u;
        goto label_25e428;
    }
    ctx->pc = 0x25E420u;
    {
        const bool branch_taken_0x25e420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E420u;
            // 0x25e424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e420) {
            ctx->pc = 0x25E468u;
            goto label_25e468;
        }
    }
    ctx->pc = 0x25E428u;
label_25e428:
    // 0x25e428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25e42c:
    // 0x25e42c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e430:
    // 0x25e430: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x25e430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_25e434:
    // 0x25e434: 0x320f809  jalr        $t9
label_25e438:
    if (ctx->pc == 0x25E438u) {
        ctx->pc = 0x25E43Cu;
        goto label_25e43c;
    }
    ctx->pc = 0x25E434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E43Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E43Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E43Cu; }
            if (ctx->pc != 0x25E43Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E43Cu;
label_25e43c:
    // 0x25e43c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25e440:
    // 0x25e440: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e444:
    // 0x25e444: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_25e448:
    // 0x25e448: 0x320f809  jalr        $t9
label_25e44c:
    if (ctx->pc == 0x25E44Cu) {
        ctx->pc = 0x25E44Cu;
            // 0x25e44c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25E450u;
        goto label_25e450;
    }
    ctx->pc = 0x25E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E450u);
        ctx->pc = 0x25E44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E448u;
            // 0x25e44c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E450u; }
            if (ctx->pc != 0x25E450u) { return; }
        }
        }
    }
    ctx->pc = 0x25E450u;
label_25e450:
    // 0x25e450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25e454:
    // 0x25e454: 0x8c620374  lw          $v0, 0x374($v1)
    ctx->pc = 0x25e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
label_25e458:
    // 0x25e458: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x25e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e45c:
    // 0x25e45c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25e45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25e460:
    // 0x25e460: 0xe4600388  swc1        $f0, 0x388($v1)
    ctx->pc = 0x25e460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 904), bits); }
label_25e464:
    // 0x25e464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e468:
    // 0x25e468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e46c:
    // 0x25e46c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25e470:
    // 0x25e470: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e474:
    // 0x25e474: 0x3e00008  jr          $ra
label_25e478:
    if (ctx->pc == 0x25E478u) {
        ctx->pc = 0x25E478u;
            // 0x25e478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x25E47Cu;
        goto label_fallthrough_0x25e474;
    }
    ctx->pc = 0x25E474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E474u;
            // 0x25e478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e474:
    ctx->pc = 0x25E47Cu;
}
