#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShotGrenadGun__FPfPf
// Address: 0x2d0220 - 0x2d03a8
void ShotGrenadGun__FPfPf_0x2d0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShotGrenadGun__FPfPf_0x2d0220");
#endif

    switch (ctx->pc) {
        case 0x2d0250u: goto label_2d0250;
        case 0x2d0260u: goto label_2d0260;
        case 0x2d0284u: goto label_2d0284;
        case 0x2d02a4u: goto label_2d02a4;
        case 0x2d02d8u: goto label_2d02d8;
        case 0x2d02f8u: goto label_2d02f8;
        case 0x2d030cu: goto label_2d030c;
        case 0x2d0320u: goto label_2d0320;
        case 0x2d0334u: goto label_2d0334;
        case 0x2d0358u: goto label_2d0358;
        case 0x2d0374u: goto label_2d0374;
        case 0x2d038cu: goto label_2d038c;
        default: break;
    }

    ctx->pc = 0x2d0220u;

    // 0x2d0220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0224: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d0224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d0228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d022c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0230: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d0234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d0238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d023c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d023cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0248: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D0248u;
    SET_GPR_U32(ctx, 31, 0x2D0250u);
    ctx->pc = 0x2D024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0248u;
            // 0x2d024c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0250u; }
        if (ctx->pc != 0x2D0250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0250u; }
        if (ctx->pc != 0x2D0250u) { return; }
    }
    ctx->pc = 0x2D0250u;
label_2d0250:
    // 0x2d0250: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d0250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0258: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D0258u;
    SET_GPR_U32(ctx, 31, 0x2D0260u);
    ctx->pc = 0x2D025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0258u;
            // 0x2d025c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0260u; }
        if (ctx->pc != 0x2D0260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0260u; }
        if (ctx->pc != 0x2D0260u) { return; }
    }
    ctx->pc = 0x2D0260u;
label_2d0260:
    // 0x2d0260: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2d0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0264: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2d0268: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2d0268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2d026c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d026cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d0270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0274: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2d0274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2d0278: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d0278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d027c: 0xc06da08  jal         func_1B6820
    ctx->pc = 0x2D027Cu;
    SET_GPR_U32(ctx, 31, 0x2D0284u);
    ctx->pc = 0x2D0280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D027Cu;
            // 0x2d0280: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6820u;
    if (runtime->hasFunction(0x1B6820u)) {
        auto targetFn = runtime->lookupFunction(0x1B6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0284u; }
        if (ctx->pc != 0x2D0284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__18CRocketLauncherManFv_0x1b6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0284u; }
        if (ctx->pc != 0x2D0284u) { return; }
    }
    ctx->pc = 0x2D0284u;
label_2d0284:
    // 0x2d0284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0288: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0288u;
    {
        const bool branch_taken_0x2d0288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0288) {
            ctx->pc = 0x2D0338u;
            goto label_2d0338;
        }
    }
    ctx->pc = 0x2D0290u;
    // 0x2d0290: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d0290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d029c: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x2D029Cu;
    SET_GPR_U32(ctx, 31, 0x2D02A4u);
    ctx->pc = 0x2D02A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D029Cu;
            // 0x2d02a0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D02A4u; }
        if (ctx->pc != 0x2D02A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__15CRocketLauncherFPfPfPf_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D02A4u; }
        if (ctx->pc != 0x2D02A4u) { return; }
    }
    ctx->pc = 0x2D02A4u;
label_2d02a4:
    // 0x2d02a4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d02a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d02a8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d02a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d02ac: 0x8c26d430  lw          $a2, -0x2BD0($at)
    ctx->pc = 0x2d02acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d02b0: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x2d02b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d02b8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d02bc: 0x24840710  addiu       $a0, $a0, 0x710
    ctx->pc = 0x2d02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x2d02c0: 0x84c60770  lh          $a2, 0x770($a2)
    ctx->pc = 0x2d02c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1904)));
    // 0x2d02c4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2d02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2d02c8: 0xae05015c  sw          $a1, 0x15C($s0)
    ctx->pc = 0x2d02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 5));
    // 0x2d02cc: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x2d02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    // 0x2d02d0: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D02D0u;
    SET_GPR_U32(ctx, 31, 0x2D02D8u);
    ctx->pc = 0x2D02D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02D0u;
            // 0x2d02d4: 0xae02016c  sw          $v0, 0x16C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D02D8u; }
        if (ctx->pc != 0x2D02D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D02D8u; }
        if (ctx->pc != 0x2D02D8u) { return; }
    }
    ctx->pc = 0x2D02D8u;
label_2d02d8:
    // 0x2d02d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d02d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02dc: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D02DCu;
    {
        const bool branch_taken_0x2d02dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02DCu;
            // 0x2d02e0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02dc) {
            ctx->pc = 0x2D0334u;
            goto label_2d0334;
        }
    }
    ctx->pc = 0x2D02E4u;
    // 0x2d02e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d02e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d02e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d02e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02ec: 0x24a502d8  addiu       $a1, $a1, 0x2D8
    ctx->pc = 0x2d02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 728));
    // 0x2d02f0: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D02F0u;
    SET_GPR_U32(ctx, 31, 0x2D02F8u);
    ctx->pc = 0x2D02F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02F0u;
            // 0x2d02f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D02F8u; }
        if (ctx->pc != 0x2D02F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D02F8u; }
        if (ctx->pc != 0x2D02F8u) { return; }
    }
    ctx->pc = 0x2D02F8u;
label_2d02f8:
    // 0x2d02f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d02fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d02fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0300: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0304: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2D0304u;
    SET_GPR_U32(ctx, 31, 0x2D030Cu);
    ctx->pc = 0x2D0308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0304u;
            // 0x2d0308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D030Cu; }
        if (ctx->pc != 0x2D030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D030Cu; }
        if (ctx->pc != 0x2D030Cu) { return; }
    }
    ctx->pc = 0x2D030Cu;
label_2d030c:
    // 0x2d030c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d0310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0314: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x2d0314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    // 0x2d0318: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D0318u;
    SET_GPR_U32(ctx, 31, 0x2D0320u);
    ctx->pc = 0x2D031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0318u;
            // 0x2d031c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0320u; }
        if (ctx->pc != 0x2D0320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0320u; }
        if (ctx->pc != 0x2D0320u) { return; }
    }
    ctx->pc = 0x2D0320u;
label_2d0320:
    // 0x2d0320: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d0324: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x2d0324u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0328: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d0328u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d032c: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D032Cu;
    SET_GPR_U32(ctx, 31, 0x2D0334u);
    ctx->pc = 0x2D0330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D032Cu;
            // 0x2d0330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0334u; }
        if (ctx->pc != 0x2D0334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0334u; }
        if (ctx->pc != 0x2D0334u) { return; }
    }
    ctx->pc = 0x2D0334u;
label_2d0334:
    // 0x2d0334: 0xae130160  sw          $s3, 0x160($s0)
    ctx->pc = 0x2d0334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 19));
label_2d0338:
    // 0x2d0338: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d033c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0340: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0344: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x2d0344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x2d0348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d034c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0350: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D0350u;
    SET_GPR_U32(ctx, 31, 0x2D0358u);
    ctx->pc = 0x2D0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0350u;
            // 0x2d0354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0358u; }
        if (ctx->pc != 0x2D0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0358u; }
        if (ctx->pc != 0x2D0358u) { return; }
    }
    ctx->pc = 0x2D0358u;
label_2d0358:
    // 0x2d0358: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d035c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d035cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0360: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0368: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d036c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D036Cu;
    SET_GPR_U32(ctx, 31, 0x2D0374u);
    ctx->pc = 0x2D0370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D036Cu;
            // 0x2d0370: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0374u; }
        if (ctx->pc != 0x2D0374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0374u; }
        if (ctx->pc != 0x2D0374u) { return; }
    }
    ctx->pc = 0x2D0374u;
label_2d0374:
    // 0x2d0374: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0378: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2d0378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d037c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0380: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d0384: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D0384u;
    SET_GPR_U32(ctx, 31, 0x2D038Cu);
    ctx->pc = 0x2D0388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0384u;
            // 0x2d0388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D038Cu; }
        if (ctx->pc != 0x2D038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D038Cu; }
        if (ctx->pc != 0x2D038Cu) { return; }
    }
    ctx->pc = 0x2D038Cu;
label_2d038c:
    // 0x2d038c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d0390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d0394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d039c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d039cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d03a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D03A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D03A0u;
            // 0x2d03a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03A8u;
}
